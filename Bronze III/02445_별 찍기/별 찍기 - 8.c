/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2445                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2445                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:06:45 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  for(int i=1;i<=2*(n-1)+1;i++){
    if(i > n) {
      for (int j=0; j<n-(i-n); j++) {
        printf("*");
      }
      for (int j=0; j<2*(i-n); j++) {
        printf(" ");
      }
      for (int j=0; j<n-(i-n); j++) {
        printf("*");
      }
    }else {
      for (int j=0; j<i; j++) {
        printf("*");
      }
      for (int j=0; j< 2* n- 2*i; j++) {
        printf(" ");
      }
      for (int j=0; j<i; j++) {
        printf("*");
      }
    }
    printf("\n");
  }
}
