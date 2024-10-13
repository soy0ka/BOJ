/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10814                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10814                          #+#        #+#      #+#    */
/*   Solved: 2024/10/12 04:24:14 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int age;
  char name[101];
} Person;

int compare(const void *a, const void *b) {
  Person *p1 = (Person *)a;
  Person *p2 = (Person *)b;
  return p1->age - p2->age;
}

int main () {
  int n;
  scanf("%d", &n);
  Person *arr = (Person *)malloc(sizeof(Person) * n);
  for (int i = 0; i < n; i++) {
    scanf("%d %s", &arr[i].age, arr[i].name);
  }

  qsort(arr, n, sizeof(Person), compare);

  for (int i = 0; i < n; i++) {
    printf("%d %s\n", arr[i].age, arr[i].name);
  }

  free(arr);
  return 0;
}