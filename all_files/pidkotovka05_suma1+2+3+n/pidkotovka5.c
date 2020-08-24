/*Написати програму, яка запитує у користувача ціле число n
та підраховує ідрукує значення суми S = 1 + 2 ... + n*/

#include <stdio.h>

int main(){
  int number_n, suma = 0;

  scanf("%d", &number_n);
  for (int i = 0; i <= number_n; i++) {
    suma += i;
  }
  printf("%d", suma);
}
