/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 3058                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/3058                           #+#        #+#      #+#    */
/*   Solved: 2025/10/06 22:19:58 by yurihana      ###          ###   ##.kr    */
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
  int t;
  cin >> t;

  for (int i=0;i<t;i++) {
    vector<int> numbers(7);
    for (int j=0;j<7;j++) {
      cin >> numbers[j];
    }

    vector<int> even_nums;
    for (int num : numbers) {
      if (num % 2 == 0) {
        even_nums.push_back(num);
      }
    }

    int sum = accumulate(even_nums.begin(), even_nums.end(), 0);
    int min_val = *min_element(even_nums.begin(), even_nums.end());

    cout << sum << " " << min_val << endl;
  }
  return 0;
}
