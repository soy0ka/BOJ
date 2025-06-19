/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2846                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2846                           #+#        #+#      #+#    */
/*   Solved: 2025/06/14 13:20:46 by yurihana      ###          ###   ##.kr    */
/*                                               무우마는.. 밤에만 나온다네요 ㅠ                             */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n=0;
  cin >> n;
  vector<int> mapa(n);

  int maxc = 0, start=mapa[0];
  for (int i=0;i<n;i++) {
    cin >> mapa[i];
    if (!(i>=1)) continue;
    if (!(mapa[i-1] < mapa[i])) {
      maxc = max(maxc, mapa[i-1] - start);
      start = mapa[i];
    } 
  }
  maxc = max(maxc, mapa[i-1] - start);
  cout << maxc;
}
