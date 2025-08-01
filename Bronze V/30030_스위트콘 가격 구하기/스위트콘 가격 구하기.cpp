/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30030                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30030                          #+#        #+#      #+#    */
/*   Solved: 2025/07/31 23:22:21 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int price;
  cin >> price;

  cout << price * 10 / 11;
}
