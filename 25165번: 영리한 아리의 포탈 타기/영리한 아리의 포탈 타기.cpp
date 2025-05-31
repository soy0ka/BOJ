/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25165                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25165                          #+#        #+#      #+#    */
/*   Solved: 2025/05/31 12:56:40 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int row, col;
  cin >> row >> col;

  // vector<vector<int>> wild (depth, vector<int>(width));
  pair<int,int> ari = {1,1};
  pair<int,int> monster;

  //0 왼쪽 1 오른쪽
  bool direction;

  cin >> ari.second >> direction;
  cin >> monster.first >> monster.second;
  
  while(!(ari.first == row && ari.second == col)) {
    if (!direction) {
      if (ari.second == 1) {
        direction = !direction;
        ari.first ++;
      } else {
        ari.second --;
      }
    } else {
      if (ari.second == col) {
        direction = !direction;
        ari.first ++;
      } else {
        ari.second ++;
      }
    }
    if (ari==monster){
      cout << "NO...";
      exit(0);
    }
  }

  cout << "YES!";
}
