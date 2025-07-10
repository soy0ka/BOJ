/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 28701	                            :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/28701	                         #+#        #+#      #+#    */
/*   Solved: 2025/07/10 19:32:48 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  unsigned long long result = 0;
  for (unsigned long long i=1;i<=n;i++) {
    result += i;
  }

  cout << result << "\n";
  cout << result*result << "\n";
  cout << ((n+1)*n/2)*((n+1)*n/2);

}
