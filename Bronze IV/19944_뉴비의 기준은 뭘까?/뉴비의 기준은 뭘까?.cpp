/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 19944                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/19944                          #+#        #+#      #+#    */
/*   Solved: 2025/06/04 10:33:36 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool isNewbie(int n) {
  return n ==1 || n ==2;
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m;
  cin >> n >> m;

  // 1,2 뉴비
  // 올드비 N학년 이하 이면서 ! 뉴비
  // 이외 TLE
  bool newbie = isNewbie(m);
  if (newbie) {
    cout << "NEWBIE!";
  } else if (m <= n && !newbie) {
    cout << "OLDBIE!";
  } else {
    cout << "TLE!";
  }
}
