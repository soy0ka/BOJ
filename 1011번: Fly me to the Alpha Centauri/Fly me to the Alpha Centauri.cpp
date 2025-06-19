/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1011                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1011                           #+#        #+#      #+#    */
/*   Solved: 2025/06/06 21:39:23 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int x,y;
    cin >> x >> y;
    int distance = y-x;
    int n = sqrt(distance);

    if (distance == n*n) {
      cout << 2*n - 1 << "\n";
    } else if (distance <= n*n + n) {
      cout << 2*n << "\n";
    } else {
      cout << 2*n + 1 << "\n";
    }
  }
}
