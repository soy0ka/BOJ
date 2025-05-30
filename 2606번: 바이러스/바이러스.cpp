/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2606                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2606                           #+#        #+#      #+#    */
/*   Solved: 2025/05/30 14:05:23 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int computer, connection;

  cin >> computer;
  cin >> connection;

  vector<bool> visited(101, false);
  unordered_map<int, vector<int>> connections;

  for (int i = 0; i < connection; i++) {
    int master, slave;
    cin >> master >> slave;
    connections[master].push_back(slave);
    connections[slave].push_back(master);
  }

  int count = 0;
  stack<int> s;
  s.push(1);
  visited[1] = true;

  while (!s.empty()) {
    int current = s.top();
    s.pop();

    for (int infected : connections[current]) {
      if (!visited[infected]) {
        visited[infected] = true;
        s.push(infected);
        count ++;
      }
    }
  }

  cout << count;
}
