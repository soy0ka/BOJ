/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2798                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2798                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 17:32:26 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main () {
  int n, m;
  scanf("%d %d", &n, &m);

  int cards[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &cards[i]);
  }

  int max = 0;
  for (int i = 0; i < n-2; i++) {
    for (int j = i+1; j < n-1; j++) {
      for (int k = j+1; k < n; k++) {
        int sum = cards[i] + cards[j] + cards[k];
        if (sum <= m && sum > max) {
          max = sum;
        }
      }
    }
  }
  printf("%d", max);
}