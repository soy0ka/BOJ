/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1931                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1931                           #+#        #+#      #+#    */
/*   Solved: 2025/01/13 01:04:07 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main (){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int meets;
  cin >> meets;
  vector<pair<int,int>> schedules(meets);

  for (int i=0;i<meets;i++) {
    cin >> schedules[i].first >> schedules[i].second;
  }

  sort(schedules.begin(), schedules.end(), [](const auto a, const auto b) {
    if (a.second == b.second) 
      return a.first < b.first;
    else
      return a.second < b.second;
  });

  int endTime = 0;
  int meetingCount = 0;
  for (auto schedule: schedules) {
    if (schedule.first >= endTime) {
      meetingCount++;
      endTime = schedule.second;
    }
  }

  cout << meetingCount << "\n" ;
  return 0;
}
