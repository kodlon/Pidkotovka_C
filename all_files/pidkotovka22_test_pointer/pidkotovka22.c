/*Тест роботи з покажчиком. Функція впорядкування.
Міняє місцями, якщо 1 аргумент більший.*/

#include <stdio.h>

double more_or_less(double *a, double *b){
  double tmp;
  if(*a > *b){
    tmp = *a;
    *a = *b;
    *b = tmp;
  }
  else printf("b more than a\n");
}

int main() {
  double a, b, *u = &a, *v = &b;

  scanf("%lf %lf", &a, &b);

  printf("Before: a = %.1lf; b = %.1lf;\n", a, b);
  more_or_less(u, v);
  printf("After:  a = %.1lf; b = %.1lf;\n", a, b);
  return 0;
}
