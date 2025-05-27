/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11047                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11047                          #+#        #+#      #+#    */
/*   Solved: 2025/05/27 20:08:33 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  int coin =0;

  vector<int> coins;

  for (int i=0;i<n;i++) {
    int value;
    cin >> value;
    coins.push_back(value);
  }

  reverse(coins.begin(), coins.end());

  for (int i=0;i<n;i++) {
    while (k - coins[i] >= 0) {
      k -= coins[i];
      coin++;
    }
  }

  cout << coin;
  return 0;
}
