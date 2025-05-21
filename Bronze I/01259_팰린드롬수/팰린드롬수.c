/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1259                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1259                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 19:56:42 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main() {
  int n;
  while (1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }

    // 10 으로 나누면 나머지 부분이 끝자리 수이다
    // 그렇다면 계속해서 반복하면? 자릿수가 뒤부터 순서대로 나오겠지?
    int reversed = 0;
    for (int i = n; i > 0; i /= 10) {
      reversed = reversed * 10 + i % 10;
    }

    if (n == reversed) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}