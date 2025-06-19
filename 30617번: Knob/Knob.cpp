/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30617                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30617                          #+#        #+#      #+#    */
/*   Solved: 2025/06/14 13:11:56 by yurihana      ###          ###   ##.kr    */
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
  vector<int> lknob (t);
  vector<int> rknob (t);

  int fun=0;
  for (int i=0;i<t;i++) {
    cin >> lknob[i] >> rknob[i];
    if (lknob[i] == rknob[i] && lknob[i] != 0) fun++;
    if (i == 0) continue;
    if (lknob[i] == lknob[i-1] && lknob[i] != 0) fun++;
    if (rknob[i] == rknob[i-1] && rknob[i] != 0) fun++;
  }

  cout << fun;
}
