/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1927                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1927                           #+#        #+#      #+#    */
/*   Solved: 2025/05/28 11:00:24 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x==0) {
      if (q.empty()) {
        cout << 0 << "\n";
      } else {
        cout << q.top() << "\n";
        q.pop();
      }
      continue;
    }
    q.push(x);
  }
}
