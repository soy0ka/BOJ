/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10813                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10813                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 22:04:03 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int *basket = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    basket[i] = i+1;
  }

  for (int i = 0; i < m; i++) {
    int origin, dest;
    scanf("%d %d", &origin, &dest);
    int temp = basket[origin-1];
    basket[origin-1] = basket[dest-1];
    basket[dest-1] = temp;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", basket[i]);
  }
}