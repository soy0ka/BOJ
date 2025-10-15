/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2371                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2371                           #+#        #+#      #+#    */
/*   Solved: 2025/10/15 15:35:27 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <list>
#include <set>

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
  int maxLength = 0;
  vector<vector<int>> files(n);
  for(int i=0;i<n;i++) {
    int value;
    while (cin >> value && value != -1) {
      files[i].push_back(value);
    }
    maxLength = max(maxLength, (int)files[i].size());
  }

  for (int i=1;i<=maxLength;i++) {
    set<vector<int>> seen;
    bool unique = true;

    for (auto &file : files) {
      vector<int> prefix = file;
      if ((int)file.size() > i) prefix.resize(i);

      if (!seen.insert(prefix).second) {
        unique = false;
        break;
      }
    }

    if (unique) {
      cout << i << endl;
      return 0;
    }
  }
  cout << maxLength << endl;
  return 0;
}
