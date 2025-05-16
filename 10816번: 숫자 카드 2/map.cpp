#include <iostream>
#include <map>
#include <fstream>

int main() {
  std::ifstream in("input.txt");
  int n;
  in >> n;

  std::map<int, int> cards;
  for (int i = 0; i < n; i++) {
    int x; in >> x;
    cards[x]++;
  }

  int m;
  in >> m;
  for (int i = 0; i < m; i++) {
    int q; in >> q;
    std::cout << cards[q] << ' ';
  }
  std::cout << '\n';
  return 0;
}
