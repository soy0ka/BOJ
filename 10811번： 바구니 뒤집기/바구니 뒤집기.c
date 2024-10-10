/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10811                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10811                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 22:09:23 by yurihana      ###          ###   ##.kr    */
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
    int start, end;
    scanf("%d %d", &start, &end);
    int *temp = (int *)malloc(sizeof(int) * (end-start+1));
    for (int j = 0; j < end-start+1; j++) {
      temp[j] = basket[start+j-1];
    }
    for (int j = 0; j < end-start+1; j++) {
      basket[start+j-1] = temp[end-start-j];
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", basket[i]);
  }
}