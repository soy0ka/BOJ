/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2775                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2775                           #+#        #+#      #+#    */
/*   Solved: 2025/05/28 16:37:05 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  for (int i=0;i<t;i++) {
    int floor, ho;
    cin >> floor;
    cin >> ho;

    vector<int> apt((floor+1) * ho + 1);
    for (int i=1;i<=ho;i++) {
      apt[i-1] = i;
    }
    for(int i=1;i<=floor;i++) {
      for (int j=0;j<ho;j++) {
        if (j == 0) {
          apt[i*ho + j] = apt[(i - 1) * ho + j];
        } else {
          apt[i*ho + j] = apt[i*ho + (j-1)] + apt[(i-1)*ho + j];
        }
      }
    }

    cout << apt[(floor*ho) + (ho-1)] << "\n";
  }
}
