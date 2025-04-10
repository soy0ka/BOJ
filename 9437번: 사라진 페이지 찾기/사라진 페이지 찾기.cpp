/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9437                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9437                           #+#        #+#      #+#    */
/*   Solved: 2025/04/08 21:34:12 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int pages, trash;
    cin >> pages;
    if (pages == 0) break;
    cin >> trash;
    int papers = pages / 4;
    vector<vector<int>> testPaper(papers);
    
    for (int i = 0; i<papers; i++) {
      testPaper[i] = { (i+1)+ i, (i+1)+(i+1), pages - 2*i - 1, pages - 2*i };
    }
  
    for (int i=0;i<testPaper.size();i++) {
      auto result = find(testPaper[i].begin(), testPaper[i].end(), trash);
      if (result != testPaper[i].end()) {
        for (int j=0;j<4;j++) {
          if (testPaper[i][j] == trash) continue;
          cout << testPaper[i][j] << " ";
        }
      }
      
    }
  }
}
