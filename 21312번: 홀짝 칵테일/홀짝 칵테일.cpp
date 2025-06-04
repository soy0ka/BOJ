/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 21312                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/21312                          #+#        #+#      #+#    */
/*   Solved: 2025/06/04 12:25:08 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isOdd(int num) {
  return num % 2;
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;
  // 짝 * 짝 = 짝
  // 짝 + 홀 = 짝
  // 홀 * 홀 = 홀
  vector<int> cocktails(7, 0);
  cocktails[0] = a;
  cocktails[1] = b;
  cocktails[2] = c;
  cocktails[3] = a*b;
  cocktails[4] = b*c;
  cocktails[5] = a*c;
  cocktails[6] = a*b*c;


  sort(cocktails.begin(), cocktails.end(), [](auto &a, auto &b) {
    return a < b;
  });
  
  int biggestOdd = 0;
  for(int i=0;i<7;i++) {
    if (isOdd(cocktails[i])) {
      biggestOdd = cocktails[i];
    }
  }
  if (biggestOdd == 0) {
    cout << cocktails[6];
  } else {
    cout << biggestOdd;
  }
}
