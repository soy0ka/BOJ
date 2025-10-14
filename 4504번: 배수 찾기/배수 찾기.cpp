/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4504                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4504                           #+#        #+#      #+#    */
/*   Solved: 2025/10/12 01:47:35 by yurihana      ###          ###   ##.kr    */
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

  int n;
  cin >> n;

  int num;
  while (true) {
    cin >> num;
    if (num == 0) break;
    
    if (num % n) {
      cout << num << " is NOT a multiple of " << n << "." << endl;
    } else {
      cout << num << " is a multiple of " << n << "." << endl;
    }
  }

  return 0;
}
