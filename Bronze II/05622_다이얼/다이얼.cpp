/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 5622                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/5622                           #+#        #+#      #+#    */
/*   Solved: 2025/04/05 23:09:11 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main () {
  map<char, int> dial = {
    {'A', 3},
    {'B', 3},
    {'C', 3},
    {'D', 4},
    {'E', 4},
    {'F', 4},
    {'G', 5},
    {'H', 5},
    {'I', 5},
    {'J', 6},
    {'K', 6},
    {'L', 6},
    {'M', 7},
    {'N', 7},
    {'O', 7},
    {'P', 8},
    {'Q', 8},
    {'R', 8},
    {'S', 8},
    {'T', 9},
    {'U', 9},
    {'V', 9},
    {'W', 10},
    {'X', 10},
    {'Y', 10},
    {'Z', 10}
  };

  string number;
  cin >> number;
  int count = 0;

  for (int i=0;i<number.length();i++) {
    count += dial[number[i]];
  }

  cout << count << endl;
  return 0;
}
