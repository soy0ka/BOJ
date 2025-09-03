/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30794                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30794                          #+#        #+#      #+#    */
/*   Solved: 2025/08/09 22:33:24 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int lv;
  string panjeong;
  cin >> lv >> panjeong;

  if (panjeong == "miss") {
    cout << 0;
  } else if (panjeong == "bad") {
    cout << lv * 200; 
  } else if (panjeong == "cool") {
    cout << lv * 400; 
  } else if (panjeong == "great") {
    cout << lv * 600; 
  } else if (panjeong == "perfect") {
    cout << lv * 1000; 
  }
}
