/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 29807                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/29807                          #+#        #+#      #+#    */
/*   Solved: 2025/06/13 21:20:57 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, num=0;
  cin >> t;
  vector<int> scores(t);
  for (int i=0;i<t;i++) {
    cin >> scores[i];
  }

  if (scores[0] > scores[2]) {
    num += (scores[0] - scores[2]) * 508;
  } else {
    num += (scores[2] - scores[0]) * 108;
  }
  if (scores[1] > scores[3]) {
    num += (scores[1] - scores[3]) * 212;
  } else {
    num += (scores[3] - scores[1]) * 305;
  }
  num += scores[4] * 707;
  num *= 4763;
  cout << num;
}
