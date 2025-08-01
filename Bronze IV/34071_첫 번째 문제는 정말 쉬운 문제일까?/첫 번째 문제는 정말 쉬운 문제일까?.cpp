/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 34071                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/34071                          #+#        #+#      #+#    */
/*   Solved: 2025/07/24 18:51:28 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  
  vector<int> diff (n);
  for (int i=0;i<n;i++) {
    cin >> diff[i];
  }

  int first = diff[0];
  sort(diff.begin(), diff.end());
  if (diff[0] == first) {
    cout << "ez";
  } else if (diff[n-1] == first) {
    cout << "hard";
  } else {
    cout << "?";
  }
}
