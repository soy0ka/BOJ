/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2556                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2556                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 11:08:01 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <time.h>
void printS (int n) {
  if (n == 0) return;
  printf("*");
  printS(n - 1);
}

int main () {
  while(1){
    printf("%lu\n",clock());
  }
}
