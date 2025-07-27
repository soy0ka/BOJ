/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 3040                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/3040                           #+#        #+#      #+#    */
/*   Solved: 2025/07/25 19:24:28 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int sum = 0;
  vector<int> samples (9);
  for (int i=0;i<9;i++) {
    cin >> samples[i];
    sum += samples[i];
  }

  for (int i=0;i<9;i++) {
    for (int j=i+1;j<9;j++) {
      if (sum - samples[i] - samples[j] == 100) {
        for (int k=0;k<9;k++) {
          if (k != i && k != j) {
            cout << samples[k] << '\n';
          }
        }
        return 0;
      }
    }
  }
}
