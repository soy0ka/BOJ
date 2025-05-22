/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11866                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11866                          #+#        #+#      #+#    */
/*   Solved: 2025/05/22 19:02:50 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>

using namespace std;

int main () {
  int n, k;
  cin >> n >> k;

  vector<int> circle;
  vector<int> kill;
  for (int i=1;i<=n;i++) {
    circle.push_back(i);
  }

  int marker = 0;
  while (!circle.empty()) {
    marker += (k-1);
    if (marker >= circle.size()) {
      marker = marker % circle.size();
    }

    kill.push_back(circle[marker]);
    circle.erase(circle.begin() + marker);
  }

  cout << "<";
  for (int i=0;i<kill.size();i++){
    if (i + 1 != kill.size()) 
      cout << to_string(kill[i]) + ", " ;
    else 
      cout << to_string(kill[i]);
  }
  cout << ">";
  return 0;
}
