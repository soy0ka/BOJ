/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 28237                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/28237                          #+#        #+#      #+#    */
/*   Solved: 2025/06/02 17:21:38 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n=0;
  cin >> n;

  vector<pair<int,int>> ACdivisors;
  vector<pair<int,int>> BDdivisors;
  for (int i=1;i*i<=n;i++) {
    if(!(n % i)) {
      ACdivisors.push_back({i, n/i});
      ACdivisors.push_back({-i, -n/i});
    }
  }


  for (int i=1;i*i<=abs(-(n+2));i++) {
    if(!(abs(-(n+2)) % i)) {
      BDdivisors.push_back({i, abs(-(n+2))/i});
      BDdivisors.push_back({-i, abs(-(n+2))/i});
    }
  }

  for (const auto& ACpair : ACdivisors) {
    int a = ACpair.first, c=ACpair.second;
    for (const auto& BDpair : BDdivisors) {
      int b = BDpair.first, d = BDpair.second;
      if (a*d+b*c == n +1){
        cout << a << " " << b << " " << c << " " << d ;
        return 0;
      }
    }
  }
  cout << "-1";
}

