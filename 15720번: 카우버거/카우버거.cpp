/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15720                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15720                          #+#        #+#      #+#    */
/*   Solved: 2025/09/25 15:25:00 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
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

  int burger, side, beverage;
  int totalPrice = 0;
  cin >> burger >> side >> beverage;

  vector<int> burgers(burger);
  vector<int> sides(side);
  vector<int> beverages(beverage);

  for (int i=0;i<burger;i++) {
    cin >> burgers[i];
    totalPrice += burgers[i];
  }
  for (int i=0;i<side;i++) {
    cin >> sides[i];
    totalPrice += sides[i];
  }
  for (int i=0;i<beverage;i++) {
    cin >> beverages[i];
    totalPrice += beverages[i];
  }

  int sets = min(burger, min(side, beverage));
  sort(all(burgers), greater<int>());
  sort(all(sides), greater<int>());
  sort(all(beverages), greater<int>());

  cout << totalPrice;
  for (int i=0;i<sets;i++) {
    burgers[i] *= 0.9;
    sides[i] *= 0.9;
    beverages[i] *= 0.9;
  }

  int discounted = 0;
  discounted = accumulate(all(burgers), 0) + accumulate(all(sides), 0) + accumulate(all(beverages), 0);
  cout << endl << discounted;

  return 0;
}
