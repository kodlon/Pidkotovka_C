/*Програма запитує у користувача 2 цілих числа
m та n, і друкує на екран m рядків по n зірочок в кожному*/

#include <stdio.h>

int main() {
  int number_n, number_m;

  scanf("%d %d", &number_n, &number_m);
  for (int i = 0; i < number_m; i++) {
    for (int j = 0; j < number_n; j++) {
      printf("*");
    }
    printf("\n");
  }
}
