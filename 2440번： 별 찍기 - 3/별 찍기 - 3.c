/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2440                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2440                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:06:00 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main () {
  int n;
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    for (int j=n; j>i; j--) {
      printf("*");
    }
    printf("\n");
  }
}