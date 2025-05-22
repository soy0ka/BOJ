/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1074                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1074                           #+#        #+#      #+#    */
/*   Solved: 2025/05/22 08:59:13 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int fillz(
  int x, int y,
  int row, int col, 
  int loc, int size) {
  if (size == 1) {
    return loc;
  }

  int newSize = size / 2;
  int offset = (size * size) / 4;

  if (row < x + newSize && col < y + newSize) {
    return fillz(x,y, row,col, loc + offset * 0,newSize);
  } else if (row < x+newSize && col >= y + newSize) {
    return fillz(x,y+newSize, row,col, loc + offset* 1, newSize);
  } else if (row >= x + newSize && col < y + newSize) {
    return fillz(x+newSize,y, row,col, loc + offset* 2, newSize);
  } else {
    return fillz(x+newSize,y+newSize, row,col, loc + offset* 3,newSize);
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n=0;
  cin >> n;
  int size = 1 << n;
  // vector<vector<int>>z (size, vector<int>(size));

  int row,col;
  cin >> row >> col;
  int result = fillz(0, 0, row, col, 0, size);
  cout << result;

  return 0;
}
