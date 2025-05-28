/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 12865                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/12865                          #+#        #+#      #+#    */
/*   Solved: 2025/05/28 13:30:28 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  unsigned int n,k;
  cin >> n >> k;
  vector<pair<unsigned int, unsigned int>> objects(n);
  for (int i=0;i<n;i++) {
    unsigned weight, value;
    cin >> weight >> value;
    objects[i] = {weight, value};
  }
  sort(objects.begin(), objects.end());

  vector<unsigned int> dp(k+1);
  for (int i=0;i<=n;i++) {
    int weight = objects[i].first;
    int value = objects[i].second; 
    for (int j=k;j>=weight;j--) {
      dp[j] = max(dp[j], dp[j - weight] + value);
    }
  }

  cout << dp[k];
}
