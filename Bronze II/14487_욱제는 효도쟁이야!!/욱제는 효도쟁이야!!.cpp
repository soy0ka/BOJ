/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14487                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14487                          #+#        #+#      #+#    */
/*   Solved: 2025/06/02 10:51:30 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int village;
  cin >> village;
  vector<int> villages(village, 0);
  int max = 0;
  for (int i=0;i<village;i++){
    cin >> villages[i];
    if (villages[i] > max )
      max = villages[i];
  }

  int sum = 0;
  for (int i=0;i<village;i++){
    sum+=villages[i];
  }
  sum -= max;

  cout << sum;
}
