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
#include <vector>
#include <algorithm>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t=0, k=0;
  cin >> t;


  
  for (int i=0;i<t;i++) {
    cin >> k;
    vector<int> q;
    vector<vector<int>::iterator> prio;
    for (int j=0;j<k;j++) {
      char command;
      int value;
      cin >> command >> value;

      if (command == 'I') {
        q.push_back(value);
        prio.push_back(--q.end());
      } else if (command == 'D') {
        if (!prio.empty()) {
          sort(prio.begin(), prio.end(), [](auto a, auto b) {
            return *a < *b;
          });

          if (value == 1) {
            q.erase(prio.back());
            prio.pop_back();
          } else {
            q.erase(prio.front());
            prio.erase(prio.begin());
          }
        }
      }
    }
    if (prio.empty()) {
      cout << "EMPTY" << "\n";
    } else {
      sort(prio.begin(), prio.end(), [](auto a, auto b) {
        return *a < *b;
      });

      cout << *prio.back() << " " << *prio.front() << "\n";
    }
  }

  return 0;
}
