/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 7662                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/7662                           #+#        #+#      #+#    */
/*   Solved: 2025/05/27 20:58:46 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t=0, k=0;
  cin >> t;
  
  for (int i=0;i<t;i++) {
    cin >> k;
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;
    multiset<int> ms;
    
    for (int j=0;j<k;j++) {
      char command;
      int value;
      cin >> command >> value;

      if (command == 'I') {
        max.push(value);
        min.push(value);
        ms.insert(value);
      } else if (command == 'D') {
        if (value == 1) {
          while (!max.empty() && ms.find(max.top()) == ms.end()) max.pop();
          if (!max.empty()) {
            ms.erase(ms.find(max.top()));
            max.pop();
          }
        } else {
          while (!min.empty() && ms.find(min.top()) == ms.end()) min.pop();
          if (!min.empty()) {
            ms.erase(ms.find(min.top()));
            min.pop();
          }
        }
      }
    }
    if (ms.empty()) {
      cout << "EMPTY" << "\n";
    } else {
      while (!max.empty() && ms.find(max.top()) == ms.end()) max.pop();
      while (!min.empty() && ms.find(min.top()) == ms.end()) min.pop();
      cout << max.top() << " " << min.top() << "\n";
    }
  }

  return 0;
}
