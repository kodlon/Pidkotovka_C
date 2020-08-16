/*Програма, яка для введеного корист цілого
числа n дурукє значення його факторіалу
n! = 1 * 2 * 3 * ... * n*/

#include <stdio.h>

int main(){
  int n;
  float factorial = 1;

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) factorial *= i;
  printf("%g", factorial);
}
