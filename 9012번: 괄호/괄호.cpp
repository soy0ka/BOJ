/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9012                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9012                           #+#        #+#      #+#    */
/*   Solved: 2025/05/22 01:24:10 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
// 한번 열렸으면.. 다시 열리기 전에 최소한 한번은 닫혀야 VPS다 
// 맞지??
#include <iostream>
using namespace std;

bool isVPS(string testcase) {
  int depth = 0;
  if (testcase[0] != '(') return false;
  for (int i=0;i<testcase.length();i++) {
    if (testcase[i] == '(') {
      depth++;
    } else if (testcase[i] == ')') {
      depth--;
      if (depth < 0 ) return false;
    } else {
      return false;
    }
  }
  if (depth != 0) return false;
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 0;
  cin >> t;
  for (int i=0;i<t;i++){
    string testcase;
    cin >> testcase;
    
    cout << (isVPS(testcase) ? "YES" : "NO") << "\n";
  }
}
