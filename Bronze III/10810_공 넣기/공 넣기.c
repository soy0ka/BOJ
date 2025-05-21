/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10810                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10810                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 21:53:42 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main () {
  int n, m;
  scanf("%d %d", &n, &m);
  int *basket = (int *)malloc(sizeof(int) * n);
  
  for (int i = 0; i < m; i++) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    for (int j = a-1; j < b; j++) {
      basket[j] = c;
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", basket[i]);
  }
}