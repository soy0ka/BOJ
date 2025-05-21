/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1463                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1463                           #+#        #+#      #+#    */
/*   Solved: 2025/05/21 16:30:06 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;
// X % 3 == 0 -> X / 3
// X % 2 == 0 -> X / 2
// X - 1

void initDp(vector<int> &dp, int size) {
  for (int i=2;i<=size;i++) {
    dp[i] = dp[i - 1] + 1;
    if (i % 2 == 0) {
      dp[i] = min(dp[i], dp[i / 2] + 1);
    }
    if (i % 3 == 0) {
      dp[i] = min(dp[i], dp[i / 3] + 1);
    }
  }

}
int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> dp(n + 1, 0);
  initDp(dp, n);


  cout << dp[n] << '\n';
  return 0;
}
