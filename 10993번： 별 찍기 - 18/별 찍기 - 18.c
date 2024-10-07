/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10993                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10993                          #+#        #+#      #+#    */
/*   Solved: 2024/10/07 13:13:12 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

/*
홀수일때는 ^ 짝수일때는 v
*/
void printResult(char **arr, int x, int y) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      printf("%c", arr[i][j]);
    }
    printf("\n");
  }
}

char** generate2DArray(int x, int y) {
  char** arr = (char**)malloc(x * sizeof(char*));
  for (int i = 0; i < x; i++) {
    arr[i] = (char*)malloc(y * sizeof(char));
    if (arr[i] == NULL) {
      for (int j = 0; j < i; j++) {
        free(arr[j]);
      }
      free(arr);
      return NULL;
    }

    for (int j = 0; j < y; j++) {
        arr[i][j] = '0';
    }
  }

  return arr;
}

int main() {
  int n;
  scanf("%d", &n);
  bool isOdd = n % 2 == 1;

  int x = (int)pow(2, n) + ((int)pow(2, n-1) - 1);
  int y = (int)pow(2, n) - 1;

  int half = (y / 2) + 1;
  char** arr = generate2DArray(x, y);

  if (isOdd) {
    // 홀수일때는 ^ 모양
  } else {
    // 짝수일때는 v 모양
    
  }

  printResult(arr, x, y);
  for (int i = 0; i < n; i++) {
    free(arr[i]);
  }
  free(arr);
  return 0;
}
