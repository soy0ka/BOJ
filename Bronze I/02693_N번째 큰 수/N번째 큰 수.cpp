/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2693                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2693                           #+#        #+#      #+#    */
/*   Solved: 2025/06/04 12:54:42 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t=0;
  cin >> t;
  for (int i=0;i<t;i++) {
    vector<int> v(10);
    for (int i=0;i<10;i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[7] << "\n"; 
  }
}
