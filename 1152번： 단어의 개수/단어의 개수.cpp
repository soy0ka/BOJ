/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1152                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1152                           #+#        #+#      #+#    */
/*   Solved: 2025/04/08 16:04:32 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string str;
  getline(cin, str);
  
  int wordCount = 0;
  istringstream iss(str);

  while (iss >> str) {
    wordCount++;
  }

  cout << wordCount << '\n';
}
