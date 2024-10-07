/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2447                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2447                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:07:10 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void fill_pattern(char **arr, int x, int y, int size) {
  if (size == 1) {
    arr[x][y] = '*';
    return;
  }

  int newSize = size / 3;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (!(i == 1 && j == 1)) {
        fill_pattern(arr, x + i * newSize, y + j * newSize, newSize);
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  // arr[n][n] 크기의 배열 동적할당 후 공백으로 초기화
  char **arr = (char **)malloc(n * sizeof(char *));
  for (int i = 0; i < n; i++) {
    arr[i] = (char *)malloc(n * sizeof(char));
    for (int j = 0; j < n; j++) {
      arr[i][j] = ' ';
    }
  }

  fill_pattern(arr, 0, 0, n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%c", arr[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++) {
    free(arr[i]);
  }
  free(arr);
  return 0;
}