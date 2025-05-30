/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 28298                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/28298                          #+#        #+#      #+#    */
/*   Solved: 2025/05/30 15:13:18 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int width, height, subTile = 0;
  cin >> height >> width >> subTile;
  vector<vector<char>> tiles(height, vector<char>(width));
  vector<vector<vector<int>>> freq(subTile, vector<vector<int>>(subTile, vector<int>(26, 0)));

  for (int i=0;i<height;i++) {
    string row;
    cin >> row;
    for (int j=0;j<width;j++) {
      tiles[i][j] = row[j];
      int subTilei = i % subTile;
      int subTilej = j % subTile;
      freq[subTilei][subTilej][row[j] - 'A']++;
    }
  }

  int repaint = 0;
  vector<vector<char>> pattern (subTile, vector<char>(subTile));
  for (int i=0;i<subTile;i++) {
    for (int j=0;j<subTile;j++) {
      int max = 0;
      char mostFrequent = '\0';
      for(int k=0;k<freq[i][j].size();k++) {
        if (freq[i][j][k] > max) {
          max = freq[i][j][k];
          mostFrequent = k + 'A';
        }
      }
      pattern[i][j] = mostFrequent;
      int totalBlocks = (height / subTile) * (width / subTile); 
      repaint += totalBlocks - max;
    }
  }

  cout << repaint;
  for (int i=0;i<height;i++) {
    for (int j=0;j<width;j++) {
      cout << pattern[i%subTile][j%subTile];
    }
    cout << "\n";
  }
}
