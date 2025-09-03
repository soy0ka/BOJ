/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1010                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1010                           #+#        #+#      #+#    */
/*   Solved: 2025/07/28 14:08:08 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

vector<long long>fact(31);
int maxfact = 2;

long long factorial(long long n) {
  return n <= 1 ? 1 : n * factorial(n - 1);
}

long long C(int m, int n) {
  return factorial(n) / (factorial(m) * factorial(n - m));
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  fact[0] = 1;
  fact[1] = 1;
  
  for (int i=0;i<t;i++) {
    long long n, m;
    cin >> n >> m;
    cout << C(m,n) << endl;
  }
}
