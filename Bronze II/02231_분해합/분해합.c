/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2231                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2231                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 17:24:59 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
// n의 분해합 = n + 각 자리수의 합
// char 로 받아도 되고 아님 /10^n 해서 찾아도 될듯
// n의 생성자를 알려면?
// n - 9 * (자릿수) 부터 n까지

int main () {
  int n = 0;
  scanf("%d", &n);

  int jarisu = 0;
  for (int i = n; i > 0; i /= 10) {
    jarisu++;
  }

  int start = n - 9 * jarisu;
  for (int i = start; i < n; i++) {
    int sum = i;
    for (int j = i; j > 0; j /= 10) {
      sum += j % 10;
    }
    if (sum == n) {
      printf("%d", i);
      return 0;
    }
  }
  printf("0");
  return 0;
}
