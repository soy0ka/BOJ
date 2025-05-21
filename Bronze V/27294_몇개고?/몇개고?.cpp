/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 27294                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/27294                          #+#        #+#      #+#    */
/*   Solved: 2025/04/08 21:09:43 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int time;
  bool alcohol = false;

  cin >> time >> alcohol;

  bool isLunch = (12 <= time && time <= 16);

  // 점심 -> 320개
  // 술 -> 280
  if (alcohol) {
    cout << "280";
  } else {
    if (isLunch) {
      cout << "320";
    } else {
      cout << "280";
    }
  }

}
