/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2444                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2444                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:06:34 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  for (int i=0; i<(n*2-1); i++) {
    if (i >= n){
      for (int j=0; j<(i+1)-n; j++) {
        printf(" ");
      }
      for (int j=0; j<2*(n-(i+1)+n)-1; j++) {
        printf("*");
      }
    } else {
      for (int j=1; j<n-i; j++) {
        printf(" ");
      }
      for (int j=0; j<2*i+1; j++) {
        printf("*");
      }
    }
    printf("\n");
  }
}
