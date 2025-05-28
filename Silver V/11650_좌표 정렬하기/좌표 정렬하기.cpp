/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11650                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11650                          #+#        #+#      #+#    */
/*   Solved: 2025/05/28 11:48:42 by yurihana      ###          ###   ##.kr    */
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
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
  });

  for (const auto &p : cordinates) {
    cout << p.first << " " << p.second << "\n";
  }
  return 0;
}
