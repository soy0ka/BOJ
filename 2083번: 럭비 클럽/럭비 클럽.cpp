/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2083                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2083                           #+#        #+#      #+#    */
/*   Solved: 2025/09/04 23:25:09 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
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
const ll LLINF = 4'500'000'000'000'000'000;
const ll MOD = 1'000'000'007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  while (true) {
    string name;
    int age, weight;
    cin >> name >> age >> weight;

    if (!name.compare("#") && age == 0 && weight == 0) {
      break;
    }

    if (age > 17 || weight >= 80) {
      cout << name <<" Senior" << endl;
    } else {
      cout << name <<" Junior" << endl;
    }
  }
}
