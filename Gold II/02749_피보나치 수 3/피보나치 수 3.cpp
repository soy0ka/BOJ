/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2749                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2749                           #+#        #+#      #+#    */
/*   Solved: 2025/09/28 15:14:17 by yurihana      ###          ###   ##.kr    */
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
const ll MOD = 1'000'000LL;
const ll PISANO = 1'500'000LL;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  ll n;
  cin >> n;
  ll r = n % PISANO;
  if (r == 0) {
    cout << 0;
  } else if (r == 1) {
    cout << 1;
  } else {
    vector<ll> fibo (r+1);
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i=2;i<=r;i++) {
      fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD;
    }

    cout << fibo[r];
  }
}
