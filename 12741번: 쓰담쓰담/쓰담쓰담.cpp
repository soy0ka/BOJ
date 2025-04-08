/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 12741                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/12741                          #+#        #+#      #+#    */
/*   Solved: 2025/04/07 20:13:46 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool query(int node, int start, int end, int l, int r, vector<bool>& tree) {
  if (r < start || end < l) return true;
  if (l <= start && end <= r) return tree[node];
  int mid = (start + end) / 2;
  return query(node * 2, start, mid, l, r, tree) && query(node * 2 + 1, mid + 1, end, l, r, tree);
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N, repeat;  
  cin >> N >> repeat;
  int* height = new int[N];
  bool* check = new bool[N - 1];

  int size = 1;
  while (size < N - 1) size <<= 1;
  vector<bool> tree(2 * size, true);

  for (int i=0;i<N;i++) {
    cin >> height[i];
    if (i != 0) {
      check[i-1] = height[i-1] <= height[i];
    }
  }


  for (int i=0;i<N - 1;i++) {
    tree[size + i] = check[i];
  }

  for (int i=size - 1;i>=1;--i) {
    tree[i] = tree[i * 2] && tree[i * 2 + 1];
  }


  for (int i=0;i<repeat;i++) {
    int Q, L, R;
    cin >> Q >> L >> R;
    if (Q == 1) {
      if (R - L <= 0) {
        cout << "CS204\n";
      } else if (query(1, 0, size - 1, L - 1, R - 2, tree)) {
        cout << "CS204\n";
      } else {
        cout << "HSS090\n";
      }
    }else {
      swap(height[L - 1], height[R - 1]);
      for (int i : {L-2, L-1, R-2, R-1}) {
        if (i >= 0 && i< N-1) {
          check[i] = height[i] <= height[i + 1];
          int position = i + size;
          tree[position] = check[i];
          while (position > 1) {
            position /= 2;
            tree[position] = tree[position * 2] && tree[position * 2 + 1];
          }
        }
      }
    }
  }

  return 0;
}

