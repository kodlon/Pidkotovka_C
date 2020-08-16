/*Програма рекурсія, яка має 2 аргументи
ціле n та x та повертає значення x^n*/

#include <stdio.h>

double stepeni(double x, int n){
  if(!n) return 1;
  return x * stepeni(x, n - 1);
}

int main(){
  int n;
  double x;

  scanf("%lf %d", &x, &n);

  printf("%lf", stepeni(x, n));
  return 0;
}
