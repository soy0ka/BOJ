/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1978                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1978                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 17:02:40 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int eratos (int *arr, int n) {
  int count = 0;
  for(int i=0;i<n;i++) {
    if (arr[i] == 1) {
      continue;
    }
    int is_prime = 1;
    for(int j=2;j*j<=arr[i];j++) {
      if (arr[i] % j == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      count++;
    }
  }
  return count;
}
int main () {
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(n * sizeof(int));
  for(int i=0;i<n;i++) {
    scanf("%d ", &arr[i]);
  }

  printf("%d", eratos(arr, n));
}