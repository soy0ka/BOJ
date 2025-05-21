/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11279                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11279                          #+#        #+#      #+#    */
/*   Solved: 2025/04/11 00:29:01 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct compare {
  bool operator()(int a, int b) {
    return a<b;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 0;
  priority_queue<int, vector<int>, compare> fakeHeap;
  cin >> n;

  for (int i=0;i<n;i++) {
    int command;
    cin >> command;
    if (command != 0) {
      fakeHeap.push(command);
    } else {
      if (fakeHeap.empty()) {
        cout << 0 << '\n';
      } else {
        cout << fakeHeap.top() << '\n';
        fakeHeap.pop();
      }
    }
  }  
}
