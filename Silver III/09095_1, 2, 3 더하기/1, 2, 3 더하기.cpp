/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9095                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9095                           #+#        #+#      #+#    */
/*   Solved: 2025/05/22 01:08:32 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void initDP(vector<int>& dp, int size) {
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i=4;i<=size;i++) {
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];  
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t=0;
  cin >> t;
  for (int i=0;i<t;i++){
    int n = 0;
    cin >> n;
    vector<int> dp(n + 1);
    initDP(dp, n);
    cout << dp[n] << "\n";
  }

  return 0;
}
