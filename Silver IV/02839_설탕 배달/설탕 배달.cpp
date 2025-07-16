/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2839                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2839                           #+#        #+#      #+#    */
/*   Solved: 2025/07/15 14:34:31 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int bags =0;

  while (n >= 0) {
    if (not(n%5)) {
      bags += n / 5;
      cout << bags << '\n';
      return 0;
    } else {
      n-=3;
      bags++;
    }
  }

  cout << -1;
}
