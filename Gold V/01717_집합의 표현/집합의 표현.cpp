/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1717                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1717                           #+#        #+#      #+#    */
/*   Solved: 2025/06/04 13:28:50 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

vector<int> u;
int find(int value) {
  if (value == u[value]) return value;
  return u[value] = find(u[value]);
}

void unionSet(int a, int b) {
  a = find(a);
  b = find(b);
  if (a != b) u[a] = b;
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n=0,m;
  cin >> n >> m;

  for (int i=0;i<=n;i++) {
    u.push_back(i);
  }

  for (int i=0;i<m;i++) {
    int command, a,b;
    cin >> command >> a >> b;

    if (command) {
      if (find(a) == find(b)) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    } else {
      unionSet(a,b);
    }
  }
}
