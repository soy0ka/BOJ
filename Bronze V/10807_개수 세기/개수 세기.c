/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10807                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10807                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 21:50:35 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main () {
  int n, v, count = 0;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &v);

  for (int i = 0; i < n; i++) {
    if (arr[i] == v) {
      count++;
    }
  }
  printf("%d", count);
  free(arr);
  return 0;
}
