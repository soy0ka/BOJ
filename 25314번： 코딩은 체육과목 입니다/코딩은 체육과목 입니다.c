/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25314                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25314                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 21:40:37 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <math.h>
int main () {
  int n;
  scanf("%d", &n);

  int longCount = ceil(n/4.0);
  for (int i = 0; i < longCount; i++) {
    printf("long ");
  }
  printf("int");
}