/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15820                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15820                          #+#        #+#      #+#    */
/*   Solved: 2025/06/14 13:03:09 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int s1, s2;
  cin >> s1 >> s2;
  for (int i=0;i<s1;i++) {
    long long a, b;
    cin >> a >> b;
    if (a != b) {
      cout << "Wrong Answer";
      return 0;
    }
  }

  for (int i=0;i<s2;i++) {
    long long a, b;
    cin >> a >> b;
    if (a != b) {
      cout << "Why Wrong!!!";
      return 0;
    }
  }

  cout << "Accepted";
}
