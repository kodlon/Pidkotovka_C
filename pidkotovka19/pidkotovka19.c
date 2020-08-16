/*Лінійник пошук першого ключа в масиві*/

#include <stdio.h>
#define N 5 //кількість елементів в маисиві

int main(){
  int m[N], x, i;

  for (i = 0; i < N; i++) //введення масиву
    scanf("%d", &m[i]);

  printf("key: ");
  scanf("%d", &x); //введення ключа

  for (i = 0; i < N ; i++) //проходження по масиву
    if (m[i] == x) break;

  if (i < N) printf("%d\n", ++i); //виведення номеру індексу
  else printf("no key");
  return 0;
}
