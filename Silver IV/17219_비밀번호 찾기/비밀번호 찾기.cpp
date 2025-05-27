/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17219                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17219                          #+#        #+#      #+#    */
/*   Solved: 2025/05/27 19:59:54 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int total, find;
  cin >> total >> find;
  
  unordered_map<string, string> passwords;
  for (int i = 0;i < total; i++) {
    string site, password;
    cin >> site >> password;

    passwords.insert({ site, password });
  }

  for (int i=0;i<find;i++) {
    string site;
    cin >> site;

    auto index = passwords.find(site);
    cout << index->second << "\n";
  }
}
