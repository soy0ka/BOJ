/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2579                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2579                           #+#        #+#      #+#    */
/*   Solved: 2025/05/27 20:43:04 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(const vector<int> stairs) {
  vector<int> scores(stairs.size() + 1);
  for (int i=0;i<stairs.size();i++) {
    scores[i] = stairs[i];
  }
  scores[0] = stairs[0];
  scores[1] = stairs[1] + scores[0];
  scores[2] = max(scores[0] + scores[2], scores[1] + scores[2]);
  for (int i=3;i<stairs.size();i++) {
    scores[i] = max(scores[i-2] + stairs[i], scores[i-3] + stairs[i-1] + stairs[i]);
  }

  return scores[stairs.size()-1];
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int count;
  cin >> count;
  vector<int> stairs(count + 1);

  for (int i=0;i<count;i++) {
    int score;
    cin >> score;
    stairs.push_back(score);
  }

  cout << solve(stairs);

  return 0;
}
