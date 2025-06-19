/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14626                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14626                          #+#        #+#      #+#    */
/*   Solved: 2025/06/09 10:34:37 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int isbn[13] = {0,};
  string sisbn;
  cin >> sisbn;

  for (int i=0;i<13;i++) {
    if (sisbn[i] == '*') 
      isbn[i] = -1;
    else
      isbn[i] = sisbn[i] - '0';
  }

  int checksum = isbn[12];
  int missingIndex = 0;
  int sum = 0;
  for (int i=0;i<=11;i++) {
    if (isbn[i] < 0) { 
      missingIndex = i;
      continue;
    }
    if ((i+1) % 2 == 0) {
      sum += 3 * isbn[i];
    } else {
      sum += isbn[i];
    }
  }

  int weight = (missingIndex + 1) % 2 == 0 ? 3 : 1; 
  for (int i=0;i<=9;i++) {
    int tempsum = sum + weight*i;
    int tempcheck = (10 - (tempsum % 10)) % 10;
    if (tempcheck == checksum) {
      cout << i;
      break;
    }
  }
}

