/*Програма, яка друкує суму дільників введеного
 користувачем числа n*/

#include <stdio.h>

int main(){
  int n;
  float perevirka, result;

  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    perevirka = n % i;
    if(perevirka == 0)  result += i;
  }
  printf("%g", result);
  return 0;
}
