/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10845                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10845                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 22:46:04 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

/*
  push X: 정수 X를 큐에 넣는 연산이다.
  pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
  size: 큐에 들어있는 정수의 개수를 출력한다.
  empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
  front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
  back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

void push(int **queue, int *size, int data) {
  *size += 1;
  int *new_queue = (int *)realloc(*queue, sizeof(int) * (*size));
  *queue = new_queue;
  (*queue)[*size - 1] = data;
}

void pop(int **queue, int *size) {
  if (*size == 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", (*queue)[0]);
  for (int i = 0; i < *size - 1; i++) {
    (*queue)[i] = (*queue)[i + 1];
  }
  *size -= 1;
  int *new_queue = (int *)realloc(*queue, sizeof(int) * (*size));
  if (new_queue != NULL || *size == 0) {
    *queue = new_queue;
  }
}

void sizeC(int *size) {
  printf("%d\n", *size);
}

void empty(int *size) {
  if (*size == 0) {
    printf("1\n");
    return;
  }
  printf("0\n");
}

void front(int *queue, int *size) {
  if (*size == 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", queue[0]);
}

void back(int *queue, int *size) {
  if (*size == 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", queue[*size - 1]);
}

int main() {
  int commands;
  int size = 0;
  scanf("%d", &commands);
  int *queue = NULL;

  for (int i = 0; i < commands; i++) {
    char command[6];
    int data;

    scanf("%s", command);

    if (command[0] == 'p' && command[1] == 'u') {
        scanf("%d", &data);
        push(&queue, &size, data);
    } else if (command[0] == 'p' && command[1] == 'o') {
        pop(&queue, &size);
    } else if (command[0] == 's') {
        sizeC(&size);
    } else if (command[0] == 'e') {
        empty(&size);
    } else if (command[0] == 'f') {
        front(queue, &size);
    } else if (command[0] == 'b') {
        back(queue, &size);
    }
  }

  free(queue); 
  return 0;
}