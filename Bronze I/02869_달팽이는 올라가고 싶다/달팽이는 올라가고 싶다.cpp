/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2869                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2869                           #+#        #+#      #+#    */
/*   Solved: 2025/05/29 11:17:44 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int climb, slide, goal;
  cin >> climb >> slide >> goal;
  int tries = (goal-climb) / (climb-slide) + (((goal-climb) % (climb-slide) == 0) ? 1 : 2);
  // if (((climb-slide) * (tries-1)) + climb >= goal) tries--;
  cout << tries;
}
