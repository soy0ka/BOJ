/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9251                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9251                           #+#        #+#      #+#    */
/*   Solved: 2025/06/19 22:35:41 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;

  vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,0));
  dp[0][0] = 0;
  for (int i=1;i<=a.length();i++) {
    for (int j=1;j<=b.length();j++) {
      if (a[i-1] == b[j-1]) {
        dp[i][j] = dp[i-1][j-1] + 1;
      } else {
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }

  cout << dp[a.length()][b.length()];
}
