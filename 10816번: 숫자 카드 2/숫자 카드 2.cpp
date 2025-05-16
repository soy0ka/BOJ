/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10816                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10816                          #+#        #+#      #+#    */
/*   Solved: 2025/05/14 17:31:57 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
/*
10                   <- 상근이가 가진 숫자 카드 수 (N)
6 3 2 10 10 10 -10 -10 7 3  <- 상근이가 가진 카드 리스트
8                    <- 질문할 숫자의 수 (M)
10 9 -5 2 3 4 5 -10  <- 질문 리스트 (각 숫자가 몇 개 있는지 물어보는 것)
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> cards(n);
  for (int i = 0; i < n; ++i) {
    cin >> cards[i];
  }

  // 정렬 필수
  sort(cards.begin(), cards.end());

  int m;
  cin >> m;

  for (int i = 0; i < m; ++i) {
    int query;
    cin >> query;

    auto lower = lower_bound(cards.begin(), cards.end(), query);
    auto upper = upper_bound(cards.begin(), cards.end(), query);
    cout << (upper - lower) << ' ';
  }
  cout << '\n';

  return 0;
}
