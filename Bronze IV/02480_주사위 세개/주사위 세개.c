/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2480                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2480                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 21:23:26 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main () {
  int dice[3] = {0,};
  scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

  if (dice[0] == dice[1] && dice[1] == dice[2]) {
    printf("%d", 10000 + dice[0] * 1000);
  } 
  else if (dice[0] == dice[1] || dice[0] == dice[2]) {
    printf("%d", 1000 + dice[0] * 100);
  } 
  else if (dice[1] == dice[2]) {
    printf("%d", 1000 + dice[1] * 100);
  } 
  else {
    int max = dice[0];
    if (dice[1] > max) max = dice[1];
    if (dice[2] > max) max = dice[2];
    printf("%d", max * 100);
  }
}