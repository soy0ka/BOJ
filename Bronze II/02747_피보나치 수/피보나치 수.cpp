/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2747                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2747                           #+#        #+#      #+#    */
/*   Solved: 2025/07/14 22:02:02 by yurihana      ###          ###   ##.kr    */
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
  vector<long long> fibo (n+1);
  if (n < 2) {
    if (n == 0) cout << 0;
    else cout << 1;
    return 0;
  }
  fibo[0] = 0;
  fibo[1] = 1;

  for (int i=2;i<=n;i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }

  cout << fibo[n];
}
