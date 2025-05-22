/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17478                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17478                          #+#        #+#      #+#    */
/*   Solved: 2025/05/22 09:55:53 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

void printIndent(int num) {
  int size = num * 4;
  for (int i=0;i<size;i++){
    cout << "_";
  }
}

void printRecursive(int depth, int size) {
  printIndent(depth);
  cout << "\"재귀함수가 뭔가요?\"" << "\n";

  if (depth == size) {
    printIndent(depth);
    cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << "\n";
  } else {
    printIndent(depth);
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << "\n";
    printIndent(depth);
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << "\n";
    printIndent(depth);
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << "\n";

      printRecursive(depth+1, size);
  }

  printIndent(depth);
  cout << "라고 답변하였지." << "\n";
}

int main() {
  int n = 0;
  cin >> n;

  cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n";
  printRecursive(0, n);
  return 0;
}
