/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 34075                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/34075                          #+#        #+#      #+#    */
/*   Solved: 2025/08/01 18:36:37 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <regex>
using namespace std;

#define endl '\n'

#define fr first
#define sc second

int distance(int x, int y) {
  return abs(x-y);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int algo, member, q;
  cin >> algo;
  unordered_map<string, int> nanigasuki(algo);

  for (int i=0;i<algo;i++) {
    string name;
    int diff;
    cin >> name >> diff;
    nanigasuki.insert({ name, diff });
  }
  cin >> member;
  unordered_map<string, unsigned char> members(member);

  for (int i=0;i<member;i++) {
    string name;
    int tier;
    cin >> name >> tier;
    members.insert({ name, tier });
  }

  cin >> q;
  regex memberCall("^(.*) - chan!$");
  smatch memberMatch;
  string currentMemberName;
  for (int i=0;i<q;i++) {
    string query;
    getline(cin >> ws, query);
    if (regex_match(query, memberMatch, memberCall)) {
      currentMemberName = memberMatch[1];
      cout << "hai!" << endl;
    } else if (!query.compare("nani ga suki?")) {
      auto memberit = members.find(currentMemberName);
      int memTier = memberit->sc;

      vector<pair<string,int>> algos;
      algos.reserve(nanigasuki.size());
      for (auto &p : nanigasuki) algos.emplace_back(p.fr, p.sc);

      sort(algos.begin(), algos.end(), [&](const pair<string,int>& a, const pair<string,int>& b){
        int da = distance(a.sc, memTier);
        int db = distance(b.sc, memTier);
        if (da != db) return da < db;
        return a.fr < b.fr;
      });

      cout << algos[1].fr << " yori mo " << algos[0].fr << endl;
    }
  }
}
