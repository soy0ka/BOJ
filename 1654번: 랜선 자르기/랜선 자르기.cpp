/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1654                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1654                           #+#        #+#      #+#    */
/*   Solved: 2025/05/28 11:16:47 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,k;
  cin >> k >> n;
  vector<int> cables(k);
  for (int i=0;i<k;i++) {
    int length;
    cin >> length;
    cables[i] = length;
  }

  int length = 0;
  long long min=1, max=*max_element(cables.begin(), cables.end());
  while (min <= max) {
    long long count = 0;
    int median = (min+max) / 2;
    for (int i=0;i<cables.size();i++) {
      count += cables[i] / median;
    }

    if (count >= n) {
      length = median;
      min = median + 1;
    } else {
      max = median - 1;
    }
  }
  cout << length << "\n";
}
