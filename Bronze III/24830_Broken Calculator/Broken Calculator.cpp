/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 24830                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/24830                          #+#        #+#      #+#    */
/*   Solved: 2025/05/01 00:58:06 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; 
  long long temp=1;
  cin >> n;
  for (int i=0;i<n;i++) {
    int a,b;
    char op;
    cin >> a >> op >> b;

    switch (op) {
    case '+':
      temp = (a + b) - temp;
      break;
    case '-':
      temp = temp * (a - b);
      break;
    case '*': {
      long long mul = a * b;
      temp = mul * mul;
      break;
    }
    case '/':
      if (a % 2) {
        temp = (a+1) /2;
      } else {
        temp = a/2;
      }
      break;
    }
    cout << temp << "\n";
  }
  return 0;
}
