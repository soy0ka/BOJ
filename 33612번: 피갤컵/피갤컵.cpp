/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 33612                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/33612                          #+#        #+#      #+#    */
/*   Solved: 2025/08/08 23:28:27 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;


void when(int n) {
  int year = 2024, month = 8;

  int monthPassed = 7 * n;
  year += (monthPassed + month - 1) / 12;
  month = (monthPassed + month - 1) % 12 + 1;

  cout << year << " " << month;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  when(n-1);
}
