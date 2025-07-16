/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 13699                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/13699                          #+#        #+#      #+#    */
/*   Solved: 2025/07/14 22:22:06 by yurihana      ###          ###   ##.kr    */
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
  vector<long long> dp (n+1);
  dp[0] = 1;
  for (int i=1;i<=n;i++) {
    for (int j=0;j<i;j++) {
      dp[i] += dp[j] * dp[i - j -1];
    }
  }

  cout << dp[n];
}
