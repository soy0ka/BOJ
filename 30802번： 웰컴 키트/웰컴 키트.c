/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30802                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30802                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 16:54:01 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main () {
  int n = 0;
  // S M L XL XXL XXXL
  int ts[6] = {0, 0, 0, 0, 0, 0};
  scanf("%d", &n);
  scanf("%d %d %d %d %d %d", &ts[0], &ts[1], &ts[2], &ts[3], &ts[4], &ts[5]);
  int t_set, p_set;
  scanf("%d %d", &t_set, &p_set);

  int t_least = 0;
  for (int i=0;i<6;i++) {
    // 각각 신청자수를 티셔츠 묶음으로 나눴을때 몫 + 1 묶음
    t_least += ts[i] / t_set + (ts[i] % t_set ? 1 : 0);
  }
  int p_least = 0, p_left = 0;
  // 펜의경우에는 전체참가자 / 묶음수 를 least로
  // 나머지를 ledt로

  p_least = n / p_set;
  p_left = n % p_set;

  printf("%d\n", t_least);
  printf("%d %d", p_least, p_left);
}