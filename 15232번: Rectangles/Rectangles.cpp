/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15232                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15232                          #+#        #+#      #+#    */
/*   Solved: 2025/08/19 22:55:58 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int width, height;
  cin >> height >> width;

  for (int i=0;i<height;i++) {
    for (int j=0;j<width;j++) {
      cout << "*";
    }
    cout << "\n";
  }
}
