/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1018                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1018                           #+#        #+#      #+#    */
/*   Solved: 2025/04/08 23:16:57 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int repaint(const vector<vector<int>>& board, int x, int y, int startColor) {
  int count = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      int expected = ((i + j) % 2 == 0) ? startColor : !startColor;
      if (board[x + i][y + j] != expected) count++;
    }
  }
  return count;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> board(n, vector<int>(m));

  for (int i=0;i < n;++i) {
    string line;
    cin >> line;
    for (int j=0;j < m; ++j)
      board[i][j] = (line[j] == 'B') ? 1 : 0;
  }

  int mini = INT_MAX;
  for (int i = 0; i <= n - 8; i++) {
    for (int j = 0; j <= m - 8; j++) {
      for (int k = 0; k < 2; k++) {
        int count = repaint(board, i, j, k);
        mini = min(mini, count);
      }
    }
  }

  cout << mini;
}
