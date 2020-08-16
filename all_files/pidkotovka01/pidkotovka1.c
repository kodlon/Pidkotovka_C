/*Користувач вводить 2 числа, а потім має ввести їх добуток.
Якщо неправильно то програма повторюється і паралельно підраховує
кількість помилок зроблених користувачем.*/

#include <stdio.h>

int main() {
  int number_one, number_two, check, check_error = 0, flag = 1;

  scanf("%d %d", &number_one, &number_two);
  while (flag){
    scanf("%d", &check );
    if (check == number_one * number_two){
      printf("Good!\nErrors: %d", check_error);
      flag = 0;
    }
    else{
      printf("Not Good! Try again: \n");
      check_error++;
    }
  }
  return 0;
}
