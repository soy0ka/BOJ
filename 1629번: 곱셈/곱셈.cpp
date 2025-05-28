/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1629                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1629                           #+#        #+#      #+#    */
/*   Solved: 2025/05/28 12:20:23 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

typedef long long ll;

ll modpow(ll a, ll b, ll c) {
  if (b == 0) return 1;
  ll half = modpow(a, b / 2, c);
  ll result = (half * half) % c;
  if (b % 2 == 1) result = (result * a) % c;
  return result;
}

int main() {
  ll A, B, C;
  cin >> A >> B >> C;
  cout << modpow(A, B, C) << '\n';
}
