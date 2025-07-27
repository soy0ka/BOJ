/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25206                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25206                          #+#        #+#      #+#    */
/*   Solved: 2025/07/17 14:20:22 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double scoreTotal = 0;
  double scoreCount = 0;
  for (int i=0;i<20;i++) {
    string name;
    double score;
    string grade;
    cin >> name >> score >> grade;
    if (grade == "A+") {
      scoreTotal += score * 4.5;
      scoreCount += score;
    } else if (grade == "A0") {
      scoreTotal += score * 4.0;
      scoreCount += score;
    } else if (grade == "B+") {
      scoreTotal += score * 3.5;
      scoreCount += score;
    } else if (grade == "B0") {
      scoreTotal += score * 3.0;
      scoreCount += score;
    } else if (grade == "C+") {
      scoreTotal += score * 2.5;
      scoreCount += score;
    } else if (grade == "C0") {
      scoreTotal += score * 2.0;
      scoreCount += score;
    } else if (grade == "D+") {
      scoreTotal += score * 1.5;
      scoreCount += score;
    } else if (grade == "D0") {
      scoreTotal += score * 1.0;
      scoreCount += score;
    } else if (grade == "F") {
      scoreTotal += * 0.0;
      scoreCount += score;
    }
  }

  cout << scoreTotal/scoreCount;
  
}
