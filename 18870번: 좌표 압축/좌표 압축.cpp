/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18870                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18870                          #+#        #+#      #+#    */
/*   Solved: 2025/04/28 10:48:13 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n=0;
  cin >> n;
  vector<int> cordinates(n);
  for (int i=0;i<n;i++) {
    cin >> cordinates[i];
  }
  vector<int> temp = cordinates;
  sort(temp.begin(), temp.end());
  temp.erase(unique(temp.begin(), temp.end()), temp.end());

  map<int, int> compressed;
  for (int i=0;i<temp.size();i++){
    compressed[temp[i]] = i;
  }

  for (int i=0;i<cordinates.size();i++){
    cout << compressed[cordinates[i]] << " ";
  }

  return 0;
}
