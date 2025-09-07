/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30087                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30087                          #+#        #+#      #+#    */
/*   Solved: 2025/09/05 21:58:52 by yurihana      ###          ###   ##.kr    */
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

  int n;
  cin >> n;

  for (int i=0;i<n;i++) {
    string subject;
    cin >> subject;

    if (!subject.compare('Algorithm')) {
      cout << "204" << endl;
    } else if (!subject.compare('DataAnalysis')) {
      cout << "207" << endl;
    } else if (!subject.compare('ArtificialIntelligence')) {
      cout << "302" << endl;
    } else if (!subject.compare('CyberSecurity')) {
      cout << "B101" << endl;
    } else if (!subject.compare('Network')) {
      cout << "303" << endl;
    } else if (!subject.compare('Startup')) {
      cout << "501" << endl;
    } else if (!subject.compare('TestStrategy')) {
      cout << "105" << endl;
    } 
  }
}
