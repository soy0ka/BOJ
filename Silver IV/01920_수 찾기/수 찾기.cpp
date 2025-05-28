/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1920                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1920                           #+#        #+#      #+#    */
/*   Solved: 2025/05/28 16:13:23 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m;
  cin >> n;

  vector<int> numbers(n);
  for (int i=0;i<n;i++) {
    cin >> numbers[i];
  }
  sort(numbers.begin(), numbers.end());
  cin >> m;
  for (int i=0;i<m;i++) {
    int input;
    cin >> input;
    bool exsist = binary_search(numbers.begin(), numbers.end(), input);
    if (exsist) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
}
