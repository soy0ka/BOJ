/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11399                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11399                          #+#        #+#      #+#    */
/*   Solved: 2025/05/22 01:04:03 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> ATMQueue(n);

  for (int i = 0; i < n; i++) {
    cin >> ATMQueue[i];
  }
  sort(ATMQueue.begin(), ATMQueue.end());
  int totalTime = 0;
  for (int i = 0; i < n; i++) {
    totalTime += ATMQueue[i] * (n - i);
  }
  cout << totalTime << '\n';
  return 0;
}
