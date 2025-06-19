/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 8979                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/8979                           #+#        #+#      #+#    */
/*   Solved: 2025/06/17 21:37:14 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Medals {
  int code;
  int gold;
  int silver;
  int bronze;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  int k;
  cin >> n >> k;

  vector<Medals> medals(n);
  for (int i=0;i<n;i++) {
    cin >> medals[i].code >> medals[i].gold >> medals[i].silver >> medals[i].bronze;
  }

  sort(medals.begin(), medals.end(), [](const auto &a, const auto &b) {
    if (a.gold != b.gold) return a.gold > b.gold;
    if (a.silver != b.silver) return a.silver > b.silver;
    return a.bronze > b.bronze;
  });

  for (int i=0;i<n;i++) {
    if (medals[i].code == k) {
      cout << i;
    }
  }
}
