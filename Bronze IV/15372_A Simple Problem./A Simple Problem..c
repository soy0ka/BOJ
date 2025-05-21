/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15372                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15372                          #+#        #+#      #+#    */
/*   Solved: 2024/10/13 15:41:01 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main() {
  // 치킨 1마리 -> 콜라 2개 혹은 맥주 1개
  int total, pepsi, beer;
  // coke, cola 밴입니다?ㄴ

  scanf("%d", &total);
  scanf("%d %d", &pepsi, &beer);
  
  int count = 0;
  count += pepsi/2;
  count += beer;

  printf("%d", count > total ? total : count);
}