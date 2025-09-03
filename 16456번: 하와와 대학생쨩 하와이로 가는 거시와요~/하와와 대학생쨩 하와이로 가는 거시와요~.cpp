/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 16456                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/16456                          #+#        #+#      #+#    */
/*   Solved: 2025/08/01 17:57:14 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;
const int MOD = 1000000009;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int islands;
  cin >> islands;
  vector<int> hawawa (islands+1);

  hawawa[0] = 1;
  hawawa[1] = 1;
  hawawa[2] = 1;
  
  for (int i=3;i<=islands;i++) {
    hawawa[i] = (hawawa[i-1] + hawawa[i-3]) % MOD;
  }

  cout << hawawa[islands] << "\n";
}
