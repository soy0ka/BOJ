/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 20299                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/20299                          #+#        #+#      #+#    */
/*   Solved: 2025/06/02 10:28:32 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main () {
  int team, total, min;
  cin >> team >>  total >> min;

  vector<int> avaiable(0);
  int allowTeam =0;
  for (int i=0;i<team;i++) {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a+b+c) >= total &&  a >= min && b >= min && c >= min) {
      avaiable.push_back(a);
      avaiable.push_back(b);
      avaiable.push_back(c);
      allowTeam++;
    }
  }

  cout << allowTeam << "\n";

  for (int i=0;i<avaiable.size();i++) {
    cout << avaiable[i] << " ";
  }
}
