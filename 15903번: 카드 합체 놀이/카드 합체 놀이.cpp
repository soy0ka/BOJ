/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15903                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15903                          #+#        #+#      #+#    */
/*   Solved: 2025/07/02 18:32:47 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<long long> cards (n);

  for (int i=0;i<n;i++) {
    cin >> cards[i];
  }

  for (int i=1;i<=m;i++) {
    sort(cards.begin(), cards.end());
    long long sum = cards[0] + cards[1];
    cards[0] = sum;
    cards[1] = sum;
  }

  long long sum = 0;
  for (int i=0;i<n;i++) {
    sum += cards[i];
  }

  cout << sum;
}
