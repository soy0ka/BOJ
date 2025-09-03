/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30007                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30007                          #+#        #+#      #+#    */
/*   Solved: 2025/08/29 01:34:44 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  int n;k
  cin >> n;
  for (int i=0;i<n;i++) {
    long long a,b,x;
    cin >> a >> b >> x;
    long long w = a * (x-1) + b;
    cout << w << '\n';
  }
  return 0;
}
