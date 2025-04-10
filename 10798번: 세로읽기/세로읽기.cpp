/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10798                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10798                          #+#        #+#      #+#    */
/*   Solved: 2025/04/08 22:46:11 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<string> letters(5);

  for (int i=0;i<5;i++){
    cin >> letters[i];
  }


  for (int i=0;i<15;i++){
    for (int j=0;j<5;j++){
      if (letters[j][i] != 0) cout << letters[j][i];
    }
  }

}
