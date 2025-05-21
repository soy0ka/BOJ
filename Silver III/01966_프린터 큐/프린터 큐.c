#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  bool is_target;
  int priority;
} Document;

int main() {
  int n;
  scanf("%d", &n); // 테스트 케이스의 수

  for (int i = 0; i < n; i++) {
    int m, target;
    scanf("%d %d", &m, &target); // 문서의 개수, 몇 번째로 인쇄되었는지 궁금한 문서의 위치

    Document *documents = (Document *)malloc(sizeof(Document) * m);
    int *priorities = (int *)malloc(sizeof(int) * m);
    for (int j = 0; j < m; j++) {
      int priority;
      scanf("%d", &priority);
      documents[j].is_target = (j == target);
      documents[j].priority = priority;
      priorities[j] = priority;
    }

    int count = 0;
    while (true) {
      bool is_printed = true;
      for (int j = 1; j < m; j++) {
        if (documents[0].priority < documents[j].priority) {
          is_printed = false;
          break;
        }
      }

      if (is_printed) {
        count += 1;
        if (documents[0].is_target) {
          printf("%d\n", count);
          break;
        }
        for (int j = 0; j < m - 1; j++) {
          documents[j] = documents[j + 1];
        }
        m -= 1;
      } else {
        Document temp = documents[0];
        for (int j = 0; j < m - 1; j++) {
          documents[j] = documents[j + 1];
        }
        documents[m - 1] = temp;
      }
    }

    free(documents);
    free(priorities);
  }
}