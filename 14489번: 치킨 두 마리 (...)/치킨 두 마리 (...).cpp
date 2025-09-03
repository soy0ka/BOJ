/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14489                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14489                          #+#        #+#      #+#    */
/*   Solved: 2025/08/14 22:39:02 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a,b;
  int price;
  cin >> a >> b;
  cin >> price;

  if ((price*2) <= a+b) {
    cout << a+b - (price*2);
  } else {
    cout << a+b;
  }
}
