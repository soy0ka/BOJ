/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11286                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11286                          #+#        #+#      #+#    */
/*   Solved: 2025/04/10 22:03:20 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct compare {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) return a > b;
    return abs(a) > abs(b);
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
