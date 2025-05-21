/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 32751                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/32751                          #+#        #+#      #+#    */
/*   Solved: 2025/04/08 22:23:34 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string recipe;
  int recipeSize;
  int bread, pattie, lettuce, tomato;
  cin >> recipeSize;
  cin >> bread >> pattie >> lettuce >> tomato;
  cin >> recipe;

  if (recipe.back() != 'a' || recipe.front() != 'a') {
    cout << "No";
    return 0;
  }
  char temp;
  for (int i=0;i<recipeSize;i++) {
    if (recipe[i] == temp) {
      cout << "No";
      return 0;
    }

    if (recipe[i] == 'a') {
      if (--bread < 0) {
        cout << "No";
        return 0;
      }
    } else if (recipe[i] == 'b') {
      if (--pattie < 0) {
        cout << "No";
        return 0;
      }
    } else if (recipe[i] == 'c') {
      if (--lettuce < 0) {
        cout << "No";
        return 0;
      }
    }else if (recipe[i] == 'd') {
      if (--tomato < 0) {
        cout << "No";
        return 0;
      }
    }
    temp = recipe[i];
  }
  cout << "Yes";
}
