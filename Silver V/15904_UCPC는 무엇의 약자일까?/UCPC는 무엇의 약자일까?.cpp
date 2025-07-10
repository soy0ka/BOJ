/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15904                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15904                          #+#        #+#      #+#    */
/*   Solved: 2025/07/02 18:57:25 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  unsigned char ucpc = 0b00000000;
  string ucpcString;
  getline(cin, ucpcString);

  for (int i=0;i<ucpcString.length();i++) {
    if (!(ucpc & 8)) {
      if (ucpcString[i] == 'U') {
        ucpc = ucpc |= 8;
      }
    } else if (!(ucpc & 4)) {
      if (ucpcString[i] == 'C') {
        ucpc = ucpc |= 4;
      }
    } else if (!(ucpc & 2)) {
      if (ucpcString[i] == 'P') {
        ucpc = ucpc |= 2;
      }
    } else if (!(ucpc & 1)) {
      if (ucpcString[i] == 'C') {
        ucpc = ucpc |= 1;
      }
    }
  }

  if (ucpc == 0b00001111) {
    cout << "I love UCPC";
  } else {
    cout << "I hate UCPC";
  }
}
