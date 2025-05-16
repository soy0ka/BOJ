#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int main() {
  std::ifstream in("input.txt");
  int n;
  in >> n;

  std::vector<int> cards(n);
  for (int i = 0; i < n; i++) in >> cards[i];
  std::sort(cards.begin(), cards.end());

  int m;
  in >> m;

  for (int i = 0; i < m; i++) {
    int q; in >> q;
    auto lower = std::lower_bound(cards.begin(), cards.end(), q);
    auto upper = std::upper_bound(cards.begin(), cards.end(), q);
    std::cout << (upper - lower) << ' ';
  }
  std::cout << '\n';
  return 0;
}
