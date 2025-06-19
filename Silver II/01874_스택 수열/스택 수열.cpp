/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1874                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1874                           #+#        #+#      #+#    */
/*   Solved: 2025/06/03 15:20:42 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 0;
  cin >> n;
  stack<int> s;
  vector<char> result;
  int current = 1;
  for (int i=0;i<n;i++) {
    int value;
    cin >> value;
    while (current <= value) {
      s.push(current);
      result.push_back('+');
      current++;
    } 

    if (s.top() == value) {
      s.pop();
      result.push_back('-');
    } else {
      cout << "NO";
      return 0;
    }
  }

  for (auto a: result) {
    cout << a << "\n";
  }
}
