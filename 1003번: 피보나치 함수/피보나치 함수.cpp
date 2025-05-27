/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1003                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1003                           #+#        #+#      #+#    */
/*   Solved: 2025/05/27 20:17:12 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void setupDP( vector<int> &fiboZero, vector<int> &fiboOne, int size) {
  fiboZero[0] = 1;
  fiboOne[0] = 0;

  fiboZero[1] = 0;
  fiboOne[1] = 1;

  fiboZero[2] = 1;
  fiboOne[2] = 1;

  for (int i=3;i<=size;i++) {
    fiboZero[i] = fiboZero[i-1] + fiboZero[i-2];
    fiboOne[i] = fiboOne[i-1] + fiboOne[i-2];
  }
}

// fibo(4) -> fibo(3) + fibo(2)
//  fibo(2) + fibo(1)   fibo(1) + fibo(0)
//  fibo(1) + fibo(0)

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, max = 0;
  vector<int> tests;

  cin >> t;
  for (int i=0;i<t;i++) {
    int temp =0;
    cin >> temp;
    tests.push_back(temp);
    if (max < temp)
      max = temp;
  }

  vector<int> fiboZero(max + 1);
  vector<int> fiboOne(max + 1);
  setupDP(fiboZero, fiboOne, max);

  for (int i=0;i<t;i++) {
    cout << fiboZero[tests[i]] << " " <<  fiboOne[tests[i]] << "\n";
  }

  return 0;
}
