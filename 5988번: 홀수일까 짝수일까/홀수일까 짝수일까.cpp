/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 5988                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/5988                           #+#        #+#      #+#    */
/*   Solved: 2025/06/27 19:59:45 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  for (int i=0;i<n;i++) {
    string number;
    cin >> number;
    if ((int)(*prev(number.end()) - '0') % 2) {
      cout << "odd\n";
    } else {
      cout << "even\n";
    }
  }
}
