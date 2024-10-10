/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2751                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2751                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 23:28:09 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  int int_a = *(int*)a;
  int int_b = *(int*)b;
  return (int_a > int_b) - (int_a < int_b);
}

int main() {
  int n;
  scanf("%d", &n);
  
  int *arr = (int *)malloc(sizeof(int) * n);
  
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);
  
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }

  free(arr);
  return 0;
}