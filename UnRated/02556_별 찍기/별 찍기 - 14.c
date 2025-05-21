/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2556                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2556                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:08:01 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void printS (int n) {
  if (n == 0) return;
  printf("*");
  printS(n - 1);
}

int main () {
  int n = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printS(n);
    printf("\n");
  }
}