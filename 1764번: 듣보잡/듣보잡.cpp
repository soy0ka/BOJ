/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1764                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1764                           #+#        #+#      #+#    */
/*   Solved: 2025/05/22 16:09:54 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <set> 
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int 듣잡;
  int 보잡;
  set<string> 듣잡들;
  vector<string> 듣보잡;
  cin >> 듣잡 >> 보잡;
  for (int i=0;i<듣잡;i++){
    string temp;
    cin >> temp;
    듣잡들.insert(temp);
  }

  for (int i=0;i<보잡;i++){
    string temp;
    cin >> temp;
    if (듣잡들.find(temp) != 듣잡들.end()) {
      듣보잡.push_back(temp);
    }
  }

  cout << 듣보잡.size() << "\n";

  sort(듣보잡.begin(), 듣보잡.end());
  for (int i=0;i<듣보잡.size();i++) {
    cout << 듣보잡[i] << "\n";
  }

  return 0;
}
