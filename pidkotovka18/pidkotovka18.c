/*Програма фібоначчі, за допомогою рекурсії*/

#include <stdio.h>

int fibonaci(int n);

int fibonaci(int n){
  if(!n) return 0;
  if(n == 1) return 1;
  return fibonaci(n - 1) + fibonaci(n - 2);
}

int main(){
  int n;

  scanf("%d", &n);

  printf("%d", fibonaci(n));
  return 0;
}
