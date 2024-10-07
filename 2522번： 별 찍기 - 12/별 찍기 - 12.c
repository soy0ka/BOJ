/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2522                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2522                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:08:24 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int height = 2 * n - 1;
  for (int i = 1; i <= height; i++) {
    if (i <= n) {
      // n - (i+1) 개 의 공백
      for (int j = 1; j <= n - i; j++) {
        printf(" ");
      }
      // n - {n - (i+1)} 개 의 별
      for (int j = 1; j <= i; j++) {
        printf("*");
      }
    } else {
      // i - n 개 의 공백
      for (int j = 1; j <= i - n; j++) {
        printf(" ");
      }
      // n - {i - n} 개 의 별
      for (int j = 1; j <= height - i + 1; j++) {
        printf("*");
      }
    }
    printf("\n");
  }
}