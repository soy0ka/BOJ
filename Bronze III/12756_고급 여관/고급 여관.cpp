/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 12756	                            :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/12756	                         #+#        #+#      #+#    */
/*   Solved: 2025/04/08 21:24:47 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<pair<int, int>> a(1);
  vector<pair<int, int>> b(1);

  // atk hp order
  cin >> a[0].first >> a[0].second;
  cin >> b[0].first >> b[0].second;




  // 둘중 하나라도 체력이 0 이하일때까지

  while (!(a[0].second <= 0 || b[0].second <= 0)) {
    a[0].second -= b[0].first;
    b[0].second -= a[0].first;

    if (a[0].second <= 0 && b[0].second <= 0) {
      cout << "DRAW";
      break;
    } else if (a[0].second <= 0) {
      cout << "PLAYER B";
      break;
    } else if (b[0].second <= 0) {
      cout << "PLAYER A";
      break;
    }
  }
}
