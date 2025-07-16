/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11651                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11651                          #+#        #+#      #+#    */
/*   Solved: 2025/07/15 14:59:33 by yurihana      ###          ###   ##.kr    */
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
  vector<pair<int,int>> cordinates(n);

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    cordinates[i] = {x, y};
  }

  sort(cordinates.begin(), cordinates.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
  });

  for (const auto &p : cordinates) {
    cout << p.first << " " << p.second << "\n";
  }
  return 0;
}
