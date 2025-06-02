/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18311                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18311                          #+#        #+#      #+#    */
/*   Solved: 2025/06/02 11:25:57 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, k;
  cin >> n >> k;

  if (k==0) {
    cout << 1;
    return 0;
  }

  vector<long long> course(n*2+1, 0);
  vector<long long> dist(n,0);
  int points = (n*2);
  for (int i=1;i<=n;i++){
    cin >> dist[i-1];

    course[i] = dist[i-1] + course[i-1];
  }

  for (int i =n+1,j=n-1;i<=points;i++,j--) {
    course[i] = course[i - 1] + dist[j];
  }

  for (int i=0;i<course.size()-1;i++) {
    if (course[i] <= k && k < course[i+1]) {
      if (i >= n) {
        cout << n - (i - n);
      } else {
        cout << i + 1;
      }
      return 0;
    } 
  }
}

