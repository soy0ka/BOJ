/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17273                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17273                          #+#        #+#      #+#    */
/*   Solved: 2025/06/10 21:56:54 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<pair<int,int>>cards (n);
  vector<bool> state (n, false); // false 앞면, true 뒷면

  for (int i=0;i<n;i++) {
    int front;
    cin >> front;
    cards[i] = {front, 0};
  }

  for (int i=0;i<n;i++) {
    int back;
    cin >> back;
    cards[i] = {cards[i].first, back};
  }

  for (int i=0;i<m;i++) {
    int value;
    cin >> value;
    
    for (int j=0;j<n;j++) {
      if (state[j]) {
        // 뒷면 (second)
        if (cards[j].second <= value) {
          state[j] = false;
        }
      } else {
        // 앞면 (first)
        if (cards[j].first <= value) {
          state[j] = true;
        }
      }
    }
  }

  int sum = 0;
  for (int i=0;i<n;i++) {
    if (state[i]) {
      sum += cards[i].second;
    } else {
      sum += cards[i].first;
    }
    
  }

  cout << sum;

  return 0;
}
