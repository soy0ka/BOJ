/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9934                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9934                           #+#        #+#      #+#    */
/*   Solved: 2025/06/01 14:00:23 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

void buildTree(const vector<int>& visitseq, vector<int>& tree, int current, int left, int right) {
  if (left > right) return;
  int mid = (left + right) / 2;
  tree[current] = visitseq[mid];
  buildTree(visitseq, tree, current * 2, left, mid - 1);
  buildTree(visitseq, tree, current * 2 + 1, mid + 1, right);
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int depth;
  cin >> depth;

  int treeSize = (1 << depth) - 1;
  vector<int> visitseq (treeSize);
  vector<int> tree (treeSize + 1, 0);
  for (int i=0;i<treeSize;i++) {
    cin >> visitseq[i];
  }
  buildTree(visitseq, tree, 1, 0, treeSize - 1);

  int idx = 1;
  for (int d = 0; d < depth; ++d) {
    int count = 1 << d;
    for (int i = 0; i < count; ++i) {
      cout << tree[idx++] << ' ';
    }
    cout << '\n';
  }
}
