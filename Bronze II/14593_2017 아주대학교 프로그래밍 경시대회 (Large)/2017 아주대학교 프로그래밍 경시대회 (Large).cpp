/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14593                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14593                          #+#        #+#      #+#    */
/*   Solved: 2025/08/10 07:54:08 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct participant {
  int index;
  int score;
  int count;
  int time;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<participant> list (n);

  for (int i=0;i<n;i++) {
    int s, c, t;
    cin >> s >> c >> t;
    list[i] = {i+1, s, c, t};
  }

  sort(list.begin(), list.end(), [](const participant& a, const participant& b) {
    if (a.score != b.score) return a.score > b.score;
    if (a.count != b.count) return a.count < b.count;
    return a.time < b.time;
  });
  
  cout << list[0].index;
}
