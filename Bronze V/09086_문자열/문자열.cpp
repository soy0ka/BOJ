/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9086	                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9086	                          #+#        #+#      #+#    */
/*   Solved: 2025/04/05 23:06:24 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main () {
  int n;
  string str;
  cin >> n;

  for (int i=0;i<n;i++) {
    cin >> str;
    // cout << str[0] << str[str.length()-1] << endl;
    cout << str.front() << str.back() << endl;
  }
}
