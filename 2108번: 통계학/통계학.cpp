/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2108                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2108                           #+#        #+#      #+#    */
/*   Solved: 2025/06/04 16:44:10 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int sum = 0;
  int min = 4000 , max = -4000;
  map<int, int> numbers;
  vector<int> nums;

  for (int i=0;i<n;i++) {
    int input;
    cin >> input;
    
    sum += input;
    if (min > input) min = input;
    if (max < input) max = input;
    nums.push_back(input);
    auto location = numbers.find(input);
    if (location != numbers.end()) {
      location->second += 1;
    } else {
      numbers.insert({ input, 1 });
    }
  }

  vector<pair<int, int>> freq(numbers.begin(), numbers.end());

  sort(freq.begin(), freq.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
  });


  int mostf = freq.begin()->second;
  vector<int> mostfs;
  for (auto &[key, value] : freq) {
    if (value == mostf) {
      mostfs.push_back(key);
    } else {
      break;
    }
  }

  sort(mostfs.begin(), mostfs.end());
  sort(nums.begin(), nums.end());

  int mean = round((double)sum / (double)n);
  cout << mean << "\n";

  int mid = (nums.size() / 2);
  cout << nums[mid] << "\n";

  const int mostFIndex = mostfs.size() > 1 ? 1 : 0;
  cout << mostfs[mostFIndex] << "\n";

  cout << max - min;
}


