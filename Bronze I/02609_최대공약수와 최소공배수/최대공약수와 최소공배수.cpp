/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2609                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2609                           #+#        #+#      #+#    */
/*   Solved: 2025/04/28 11:06:52 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

using namespace std;

int getGCD(int a, int b) {
  if (b==0) return a;
  return getGCD(b, a % b);
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  cin >> a >> b;
  
  int GCD = 0, LCM = 0;
  GCD = getGCD(a,b);
  LCM = (a * b) / GCD;
  cout << GCD << "\n";
  cout << LCM << "\n";
  
  return 0;
}
