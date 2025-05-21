/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10988                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10988                          #+#        #+#      #+#    */
/*   Solved: 2025/04/05 23:49:35 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

using namespace std;

int main () {
  string str;
  cin >> str;
  int length = str.length();

  for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length - 1 - i]) {
      cout << 0;
      return 0;
    }
  }
  cout << 1;
  return 0;
}
