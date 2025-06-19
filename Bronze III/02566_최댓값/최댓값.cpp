/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2566                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2566                           #+#        #+#      #+#    */
/*   Solved: 2025/06/19 22:19:29 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int max = 0;
  int maxx, maxy;
  for (int i=0;i<9;i++){
    for (int j=0;j<9;j++) {
      int temp;
      cin >> temp;
      if (temp > max) {
        max = temp;
        maxx = j+1;
        maxy = i+1;
      }
    }
  }

  if (max == 0) {
    cout << "0\n1 1";
  } else {
    cout << max << "\n" << maxy << " " << maxx;
  }
}
