/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 5532                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/5532                           #+#        #+#      #+#    */
/*   Solved: 2025/06/02 10:46:31 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  double vacation, mat, lit;
  double litMax, mathMax;

  cin >> vacation >> lit >> mat >> litMax >> mathMax;

  int freedays = vacation - max((int)ceil(lit / litMax), (int)ceil(mat / mathMax));

  cout << freedays;
}
