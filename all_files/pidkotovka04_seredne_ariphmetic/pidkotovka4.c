/*Програма запитує у користувача кількість n,
вводить n дійсних чисел та друкує їх середнє арифметичне*/

#include <stdio.h>

int main(){
  int number_n;
  float number_n_vvid, arithmetic_mean = 0;

  scanf("%d", &number_n);
  for (int i = 0; i < number_n; i++) {
    scanf("%f", &number_n_vvid);
    arithmetic_mean += number_n_vvid;
  }
  printf("%f", arithmetic_mean / number_n);
}
