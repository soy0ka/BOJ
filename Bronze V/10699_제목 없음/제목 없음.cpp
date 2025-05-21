/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10699                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10699                          #+#        #+#      #+#    */
/*   Solved: 2025/04/08 20:01:49 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstdio>
#include <memory>
#include <array>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<string, string> Month = {
  {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
  {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
  {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"},
};

string lefPad(string str) {
  return str.size() == 1 ? "0" + str : str;
}

int main () {
  array<char, 1024> buffer;
  string result;
  vector<string> splited;

  unique_ptr<FILE, decltype(&pclose)> pipe(popen("date", "r"), pclose);

  while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
    result += buffer.data();
  }
  istringstream iss(result);

  while (iss >> result) {
    splited.push_back(result);
  }

  cout << splited[5] << '-' << Month[splited[1]] << '-' << lefPad(splited[2]) << endl;
  return 0;
}
