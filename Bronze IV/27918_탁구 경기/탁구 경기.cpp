/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 27918                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/27918                          #+#        #+#      #+#    */
/*   Solved: 2025/08/04 23:38:56 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int d=0,p=0;
  for (int i=0;i<n;i++) {
    string temp;
    cin >> temp;

    if (temp == "D") {
      d++;
    } else {
      p++;
    }

    if (abs(d-p) >= 2) break;
  }

  cout << d << ":" << p;
}
