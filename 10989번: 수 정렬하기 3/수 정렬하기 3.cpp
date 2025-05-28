/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10989                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10989                          #+#        #+#      #+#    */
/*   Solved: 2025/05/28 19:07:03 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int count[10001] = {0,};

  int n, input;
  int max=0;
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> input;
    if (max < input) max = input;
    count[input]++;
  }

  for (int i=1;i<=max;i++) {
    for (int j=0;j<count[i];j++){
      cout << i << "\n";
    }
  }
}
