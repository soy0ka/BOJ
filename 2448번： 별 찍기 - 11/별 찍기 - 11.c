/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2448                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2448                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:07:18 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void fill_pattern(char **arr, int x, int y, int size) {
  if (size == 1) {
    arr[x][y] = '*';
    return;
  }

  // 기본 패턴은 5x3 크기의 패턴
  //   *
  //  * *
  // *****

}

int main() {
  int n;
  scanf("%d", &n);
  // arr[n][n*2-1] 크기의 배열 동적할당 후 공백으로 초기화
  char **arr = (char **)malloc(n * sizeof(char *));
  for (int i = 0; i < n; i++) {
    arr[i] = (char *)malloc(n * 2 * sizeof(char));
    for (int j = 0; j < n * 2; j++) {
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