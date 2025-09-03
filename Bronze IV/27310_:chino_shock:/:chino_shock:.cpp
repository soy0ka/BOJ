/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 27310                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/27310                          #+#        #+#      #+#    */
/*   Solved: 2025/09/02 14:44:09 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string emoji;
  cin >> emoji;

  int colon = 0, underbar = 0;

  for (int i=0;i<emoji.length();i++) {
    if (emoji[i] == ':') {
      colon++;
    } else if (emoji[i] == '_') {
      underbar++;
    }
  }

  cout << emoji.length() + colon + underbar*5;
}
