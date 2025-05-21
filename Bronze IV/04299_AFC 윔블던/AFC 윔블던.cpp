/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4299                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4299                           #+#        #+#      #+#    */
/*   Solved: 2025/04/08 21:15:53 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int sum, sub;
  cin >> sum >> sub;
  
  int a = (sum + sub) / 2;
  int b = (sum - sub) / 2;

  if (a < 0 || b < 0 || (sum + sub) % 2 != 0 || (sum - sub) % 2 != 0) {
    cout << "-1";
  } else {
    if (a > b){
      cout << a << " " << b;
    } else {
      cout << b << " " << a;
    }
  }
}
