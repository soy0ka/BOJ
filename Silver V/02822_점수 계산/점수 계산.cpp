/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2822                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2822                           #+#        #+#      #+#    */
/*   Solved: 2025/07/08 20:40:17 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Score {
  int index;
  int score;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<Score> scores (8);
  for (int i=0;i<8;i++) {
    scores[i].index = i+1;
    cin >> scores[i].score;
  }

  sort(scores.begin(), scores.end(), [](auto &a, auto &b){
    return a.score > b.score;
  });

  int finalScore = 0;
  vector<int> ratingScore (5);
  for (int i=0;i<5;i++) {
    finalScore += scores[i].score;
    ratingScore[i] = scores[i].index;
  }

  cout << finalScore << "\n";

  sort(ratingScore.begin(), ratingScore.end());
  for (int i=0;i<5;i++) {
    cout << ratingScore[i] << " ";
  }
}
