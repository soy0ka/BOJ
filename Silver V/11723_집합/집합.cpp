/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11723                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11723                          #+#        #+#      #+#    */
/*   Solved: 2025/05/25 11:33:29 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

void add (int &S, int x) {
  S |= (1 << (x-1));
}

void remove (int &S, int x) {
  S &= ~(1 << (x-1));
}

bool check (int &S, int x) {
  return ((S & (1 << (x - 1))) ? 1 : 0)
}

void toggle (int &S, int x) {
  if (check(S, x)) {
    remove(S, x);
  } else {
    add(S, x);
  }
}

void clear(int &S) {
  S = 0;
}

void all (int &S) {
  S = (1 << 20) - 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  set<int> S;
  int n;
  cin >> n;
  for (int i=0;i<n;i++) {
    int x;
    string command;
    cin >> command;
    if (command != "empty" && command != "all") 
      cin >> x;
    if (command == "add") {
      add(S, x);
    } else if (command == "check") {
      bool ch = check(S, x);
      cout << ch << '\n';
    } else if (command == "remove") {
      remove(S, x);
    } else if (command == "toggle") {
      toggle(S, x);
    } else if (command == "all") {
      all(S);
    } else if (command == "empty") {
      clear(S);
    }
  }
}
