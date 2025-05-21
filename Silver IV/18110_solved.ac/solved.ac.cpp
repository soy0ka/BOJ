/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18110                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18110                          #+#        #+#      #+#    */
/*   Solved: 2025/04/11 00:37:50 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <numeric>
#include <set>
#include <cmath>
using namespace std;

int main () {
  int n;
  multiset<int> difficulty;
  cin >> n;

  for (int i=0;i<n;i++) {
    int diff;
    cin >> diff;

    difficulty.insert(diff);
  }

  int edge = round(static_cast<double>(n) * 0.15);

  for (int i=0;i<edge;i++) {
    auto front = difficulty.begin(); 
    difficulty.erase(front);
    auto back = difficulty.end();
    difficulty.erase(prev(back));
  }

  int sum = 0;
  for (int num: difficulty) {
    sum += num;
  }
  if (difficulty.size() != 0){
    int avg = round(static_cast<double>(sum) / difficulty.size());

    cout << avg;
  } else {
    cout << 0;
  }
}
