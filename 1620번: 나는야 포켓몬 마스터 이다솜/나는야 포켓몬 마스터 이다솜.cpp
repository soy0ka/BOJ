/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1620                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1620                           #+#        #+#      #+#    */
/*   Solved: 2025/04/10 21:42:11 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int isNumeric(string str) {
  try {
    int number = stol(str);
    return number;
  } catch (invalid_argument& e) {
    return 0;
  }
}

int main (){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  isNumeric("hello");

  int pokemons, queries;
  cin >> pokemons >> queries;
  map<int, string> pokedexToName;
  unordered_map<string, int> pokeNameToDexId;

  for (int i = 1; i <= pokemons; i++) {
    string name;
    cin >> name;
    pokedexToName.insert({ i, name});
    pokeNameToDexId.insert({ name, i});
  }

  for (int i=0;i<queries;i++) {
    string answer;
    cin >> answer;
    if (int num = isNumeric(answer)) {
      cout << pokedexToName[num] << "\n";
    } else {
      cout << pokeNameToDexId[answer] << "\n";
    }
  }


}
