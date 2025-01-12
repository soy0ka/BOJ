/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 7576                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/7576                           #+#        #+#      #+#    */
/*   Solved: 2025/01/13 01:03:41 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int main() {
  // x, y를 입력받고 2차원 배열을 동적할당한다
  int width, height;
  scanf("%d %d", &width, &height);
  int **tomatoBox = (int **)malloc(sizeof(int *) * height);
  for (int i = 0; i < height; i++) {
    tomatoBox[i] = (int *)malloc(sizeof(int) * width);
    memset(tomatoBox[i], 0, sizeof(int) * width);
  }

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      scanf("%d", &tomatoBox[i][j]);
    }
  }

  // 익음:1 익지않음:0 없음:-1
  // 이미 익어있는 토마토 0

  // 익은 토마토의 위치를 큐에 넣는다
  // 익은 토마토의 위치를 큐에서 빼면서 상하좌우를 확인한다
  // 상하좌우에 익지 않은 토마토가 있으면 익은 토마토로 바꾸고 큐에 넣는다
  // 큐가 빌 때까지 반복한다
  // 모든 토마토가 익었는지 확인한다
  // 모든 토마토가 익었으면 걸린 시간을 출력한다
  // 모든 토마토가 익지 않았으면 -1을 출력한다

  int **queue = (int **)malloc(sizeof(int *));
  int size = 0;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (tomatoBox[i][j] == 1) {
        push(queue, &size, i);
        push(queue, &size, j);
      }
    }
  }

  int front = 0;
  int days = 0;
  
  while (front < size) {
    int cur_size = size - front;
    for (int i = 0; i < cur_size; i += 2) {
      int x = (*queue)[front];
      int y = (*queue)[front + 1];

      for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        if (nx >= 0 && nx < height && ny >= 0 && ny < width) {
          if (tomatoBox[nx][ny] == 0) {
            tomatoBox[nx][ny] = 1;
            push(queue, &size, nx);
            push(queue, &size, ny);
          }
        }
      }
      front += 2;
    }
    if (front < size) days++;
  }
  
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (tomatoBox[i][j] == 0) {
        days = -1;
        break;
      }
    }
    if (days == -1) break;
  }
  
  printf("%d\n", days);
  
  for (int i = 0; i < height; i++) {
    free(tomatoBox[i]);
  }
  free(tomatoBox);
  free(queue);
  
  return 0;
}