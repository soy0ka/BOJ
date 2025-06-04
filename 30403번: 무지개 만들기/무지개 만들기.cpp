/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30403                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30403                          #+#        #+#      #+#    */
/*   Solved: 2025/06/04 12:37:34 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

char toLowerCase(char c) {
  if ('A' <= c && c <= 'Z') {
    return c - 'A' + 'a';
  }
  return c;
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  set<char>LowRainbow;
  set<char>UpperRainbow;

  for (int i=0;i<n;i++) { 
    char input;
    cin >> input;
    bool isCapital = ('A' <= input && input <= 'Z');
    input = toLowerCase(input);
    if (input != 'r' && input != 'o' && input != 'y' && input != 'g' && input != 'b' && input != 'i' && input != 'v') continue;
    if (isCapital) {
      UpperRainbow.insert(input);
    } else {
      LowRainbow.insert(input);
    }
  }

  bool UR = UpperRainbow.size() == 7;
  bool LR = LowRainbow.size() == 7;
  if (UR && LR) {
    cout << "YeS";
  } else if (UR) {
    cout << "YES";
  } else if (LR) {
    cout << "yes";
  } else {
    cout << "NO!";
  }
}
