/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9772                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9772                           #+#        #+#      #+#    */
/*   Solved: 2025/10/14 00:48:08 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
using namespace std;

#define endl '\n'
#define PRECISION 10

#define fr first
#define sc second

#define all(v) v.begin(), v.end()
#define compress(v) sort(all(v)), v.erase(unique(all(v)), v.end())

using ll = long long;
using ld = long double;

typedef pair<ll,ll> pll;
typedef pair<int,int> pii;

const int INF = 0x3f3f3f3f;
const ll LLINF = 4'500'000'000'000'000'000LL;
const ll MOD = 1'000'000'007LL;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  while (true) {
    double x,y;
    cin >> x >> y;
    if (x == 0 || y == 0 ) {
      cout << "AXIS" << endl;
      if (x==0 && y==0) break;
    }
    if (x>0 && y>0) {
      cout << "Q1" << endl;
    } 
    if (x>0 && y<0) {
      cout << "Q4" << endl;
    }
    if (x<0 && y>0) {
      cout << "Q2" << endl;
    }
    if (x<0 && y<0){
      cout << "Q3" << endl;
    }
  }
  return 0;
}
