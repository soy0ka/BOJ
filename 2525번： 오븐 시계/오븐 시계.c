/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2525                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2525                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 21:21:51 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main() {
  int hour, min;
  int duration;
  scanf("%d %d", &hour, &min);
  scanf("%d", &duration);

  int total = hour * 60 + min + duration;

  printf("%d %d", total / 60 % 24, total % 60);
}