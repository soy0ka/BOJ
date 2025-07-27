/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11134                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11134                          #+#        #+#      #+#    */
/*   Solved: 2025/07/20 07:14:02 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>9295
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  for (int i=0;i<t;i++) {
    int c, n;
    cin >> n >> c;
    if (n%c) {
      // 나머지 있음
      cout << (n/c) + 1 << "\n";
    } else {
      cout << n/c << "\n";
    }
  }
}
