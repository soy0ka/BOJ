/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1918                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1918                           #+#        #+#      #+#    */
/*   Solved: 2025/10/15 16:12:53 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <stack>
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

int prec(char ch) {
  switch (ch) {
    case '(': case ')': return 0;
    case '+': case '-': return 1;
    case '*': case '/': return 2;
    default: return -1;
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  string infix;
  cin >> infix;
  stack<char> s;
  char topOperator;

  for (int i=0;i<infix.size();i++) {
    char ch = infix[i];
    switch (ch) {
      case '+': case '-': case '*': case '/':
        while(!s.empty() && prec(ch) <= prec(s.top())) {
          cout << s.top();
          s.pop();
        }
        s.push(ch);
        break;
      case '(':
        s.push(ch);
        break;
      case ')':
        topOperator = s.top();
        s.pop();
        while(topOperator != '(') {
          cout << topOperator;
          topOperator = s.top();
          s.pop();
        }
        break;
      default:
        cout << ch;
    }
  }
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }
  return 0;
}
