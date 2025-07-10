/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 28074                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/28074                          #+#        #+#      #+#    */
/*   Solved: 2025/07/06 22:06:09 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  unsigned char mobis = 0b00000000;
  string str;
  getline(cin, str);

  for (int i=0;i<str.length();i++) {
    if (str[i] == 'M') {
      mobis = mobis |= 16;
    }
    if (str[i] == 'O') {
      mobis = mobis |= 8;
    }
    if (str[i] == 'B') {
      mobis = mobis |= 4; 
    }
    if (str[i] == 'I') {
      mobis = mobis |= 2; 
    }
    if (str[i] == 'S') {
      mobis = mobis |= 1;
    }
  }

  if (mobis == 0b00011111) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
