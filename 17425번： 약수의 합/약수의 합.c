/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17425                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17425                          #+#        #+#      #+#    */
/*   Solved: 2024/10/07 15:38:07 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000

long long div_sum[MAX + 1] = {0};
long long prefix_sum[MAX + 1] = {0};

void precompute_divisor_sums() {
  for (int i = 1; i <= MAX; i++) {
    for (int j = i; j <= MAX; j += i) {
      div_sum[j] += i; 
    }
  }

  for (int i = 1; i <= MAX; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + div_sum[i];
  }
}

int main() {
  int n;
  scanf("%d", &n);

  precompute_divisor_sums();

  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    printf("%lld\n", prefix_sum[x]);
  }

  return 0;
}