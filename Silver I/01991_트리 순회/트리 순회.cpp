/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1991                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1991                           #+#        #+#      #+#    */
/*   Solved: 2025/06/01 15:16:10 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
  char value;
  Node* left = nullptr;
  Node* right = nullptr;
  Node(char v) : value(v) {}
};

unordered_map<char, Node*> tree;

Node* getOrCreateNode(char value) {
  if (value == '.') return nullptr;
  if (tree.find(value) == tree.end()) {
    tree[value] = new Node(value);
  }
  return tree[value];
}

void preorder(Node* Parent) {
  if (!Parent) return;
  cout << Parent->value;
  preorder(Parent->left);
  preorder(Parent->right);
}

void midorder(Node* node) {
  if (!node) return;
  midorder(node->left);
  cout<< node->value;
  midorder(node->right);
}

void postorder(Node* node) {
  if (!node) return;
  postorder(node->left);
  postorder(node->right);
  cout<< node->value;
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int nodeSize = 0;
  cin >> nodeSize;

  int currentSize = 0;
  while (currentSize < nodeSize) {
    vector<char> node(3);
    cin >> node[0] >> node[1] >> node[2];
    // 부모, 왼쪽 , 오른쪽
    Node* parentNode = getOrCreateNode(node[0]);
    parentNode->left = getOrCreateNode(node[1]);
    parentNode->right = getOrCreateNode(node[2]);
    currentSize++;
  }

  Node* root = tree['A'];
  preorder(root);
  cout << "\n";
  midorder(root);
  cout << "\n";
  postorder(root);
}
