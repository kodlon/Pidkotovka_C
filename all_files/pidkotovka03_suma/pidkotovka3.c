/*Програма підраховує суму чисел, а при введені 0
або від'ємного числа. Програма перестає працювати
і виводить суму чисел.'*/

#include <stdio.h>

int main(){
  int number_one, number_two = 0, flag = 1;

  while (flag) {
    scanf("%d", &number_one);
    if (number_one <= 0){
      printf("%d", number_two);
      flag = 0;
    }
    else number_two += number_one;
  }
  return 0;
}
