/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11586                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11586                          #+#        #+#      #+#    */
/*   Solved: 2025/06/23 22:43:05 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<char>> original(n, vector<char>(n));

  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      cin >> original[i][j];
    }
  }

  // int direction = 0;
  // cin >> direction;
  // direction %= 4;

  int dir;
  cin >> dir;

  switch (dir) {
  case 1:
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        cout << original[i][j];
      }
      cout << "\n";
    }
    break;
  case 2:
    for (int i=0;i<n;i++) {
      for (int j=n-1;j>=0;j--) {
        cout << original[i][j];
      }
      cout << "\n";
    }
    break;
  case 3:
    for (int i=n-1;i>=0;i--) {
      for (int j=0;j<n;j++) {
        cout << original[i][j];
      }
      cout << "\n";
    }
    break;
  }
}
