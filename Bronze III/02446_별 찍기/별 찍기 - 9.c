/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2446                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2446                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:06:52 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  for(int i=1;i<=2*(n-1)+1;i++){
    int stars = i <= n ? (2*(n-i)+1) : (2*(i-n)+1);
    int spaces = (2 * n - stars) / 2;

    for (int j=0; j<spaces; j++) {
      printf(" ");
    }
    for (int j=0; j<stars; j++) {
      printf("*");
    }
    printf(" \n");
  }
}
