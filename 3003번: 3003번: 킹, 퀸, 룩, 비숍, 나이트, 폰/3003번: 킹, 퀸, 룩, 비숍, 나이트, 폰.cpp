/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 3003                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/3003                           #+#        #+#      #+#    */
/*   Solved: 2025/04/05 23:38:06 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  // 킹 퀸 룩 비숍 나이트 폰
  // 1 1 2 2 2 8

  int chess[6] = { 1, 1, 2, 2, 2, 8 };
  int input[6] = { 0, };

  for (int i = 0; i < 6; i++) {
    cin >> input[i];
  }

  for (int i = 0; i < 6; i++) {
    cout << chess[i] - input[i] << " ";
  }
  cout << endl;
  return 0;
}