/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2523                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2523                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:07:33 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int height = 2 * n - 1;
  for (int i = 1; i <= height; i++) {
    if (i <= n) {
      for (int j = 1; j <= i; j++) {
        printf("*");
      }
    } else {
      for (int j = 1; j <= height - i + 1; j++) {
        printf("*");
      }
    }
    printf("\n");
  }
}