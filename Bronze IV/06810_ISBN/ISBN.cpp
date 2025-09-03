/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 6810                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/6810                           #+#        #+#      #+#    */
/*   Solved: 2025/08/16 22:31:41 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int isbn[13] = {0,};
  string sisbn;
  cin >> sisbn;

  int sum =0;

  for (int i=0;i<13;i++) {
    isbn[i] = sisbn[i] - '0';
    sum += isbn[i] * i%2 ? 1 : 3;
  }

  cout << "The 1-3-sum is " << sum;
}

