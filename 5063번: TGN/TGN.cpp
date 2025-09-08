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

  int n;
  cin >> n;
  for (int i=0;i<n;i++) {
    int r, e, c;
    cin >> r >> e >> c;

    if (r > e-c) {
      cout << "do not advertise" << endl;
    } else if (r == e-c) {
      cout << "does not matter" << endl;
    } else {
      cout << "advertise" << endl;
    }
  }
}
