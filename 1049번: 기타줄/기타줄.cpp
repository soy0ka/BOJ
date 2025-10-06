/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1049                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1049                           #+#        #+#      #+#    */
/*   Solved: 2025/09/24 11:19:10 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
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

  int n,m;
  cin >> n >> m;
  vector<pii>brands(m);

  for (int i=0;i<m;i++) {
    cin >> brands[i].fr >> brands[i].sc;
  }

  for (int i=0;i<m;i++) {
    cout << i << "번브랜드" << endl;
    cout << "담품 " << brands[i].fr << "원" << endl;
    cout << "세트 " << brands[i].sc << "원" << endl;
  }
  return 0;
}
