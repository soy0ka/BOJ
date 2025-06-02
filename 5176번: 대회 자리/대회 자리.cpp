/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 5176                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/5176                           #+#        #+#      #+#    */
/*   Solved: 2025/06/02 10:59:11 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <set>
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test, participant, seat;
  
  cin >> test;
  for (int i=0;i<test;i++){
    int narak = 0;
    set<int> seats;
    cin >> participant >> seat;
    for (int j=0;j<participant;j++) {
      int prefer = 0;
      cin >> prefer;
      if(seats.find(prefer) == seats.end()) {
        seats.insert(prefer);;
      } else {
        narak++;
      }
    }
    cout << narak << "\n";
  }
}
