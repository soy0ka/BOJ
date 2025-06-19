/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10156                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10156                          #+#        #+#      #+#    */
/*   Solved: 2025/06/11 23:16:17 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, n, m;
  cin >> k >> n >> m;

  int total = k * n;
  int parent = total - m;
  parent = parent <= 0 ? 0 : parent;
  cout << parent;
}
