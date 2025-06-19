/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9610                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9610                           #+#        #+#      #+#    */
/*   Solved: 2025/06/18 21:39:07 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> count(5);

  int n;
  cin >> n;
  for (int i=0;i<n;i++) {
    int x, y;
    cin >> x >> y;

    if (x == 0 || y == 0) {
      count[4]++;
    } else if (x > 0) {
      if (y > 0) {
        count[0]++;
      } else {
        count[3]++;
      }
    } else {
      if (y > 0) {
        count[1]++;
      } else {
        count[2]++;
      }
    }
  }

  for (int i=0;i<5;i++) {
    if (i==4)
      cout << "AXIS: " << count[i];
    else
      cout << "Q" << i+1 << ": " << count[i] << "\n"; 
  }
}
