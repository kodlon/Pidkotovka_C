/*Користувач вводить дійсне число.
Програма виводить квадрат цього числа.
Цей процес повторюється доки користувачем не буде
введено 0*/

#include <stdio.h>

int main(){
  float number_one;

  while(number_one){
    scanf("%f", &number_one);
    if (number_one == 0) return 0;
    else  printf("%f\n", number_one * number_one);
  }
  return 0;
}
