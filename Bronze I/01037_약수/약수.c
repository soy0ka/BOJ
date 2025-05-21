/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1037                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1037                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 15:13:21 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = arr[0];
  int max = arr[0];
  for (int i=1; i<n; i++) {
    min = min < arr[i] ? min : arr[i];
    max = max > arr[i] ? max : arr[i];
  }
  printf("%d", min*max);
  return 0; 
}