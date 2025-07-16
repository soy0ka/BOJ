/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4949                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4949                           #+#        #+#      #+#    */
/*   Solved: 2025/07/14 08:59:36 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string testcase;
  getline(cin, testcase);
  /*
    스택
  */
  while (testcase != ".") {
    stack<char> s;
    bool isBalanced = true;
    for (char ch : testcase) {
      if (ch == '(' || ch == '[') s.push(ch);
      else if (ch == ')') {
      if (s.empty() || s.top() != '(') {
        isBalanced = false;
        break;
      }
      s.pop();
      } else if (ch == ']') {
      if (s.empty() || s.top() != '[') {
        isBalanced = false;
        break;
      }
      s.pop();
      }
    }
    cout << (isBalanced && s.empty() ? "yes" : "no") << "\n";
    getline(cin, testcase);
  }
}
