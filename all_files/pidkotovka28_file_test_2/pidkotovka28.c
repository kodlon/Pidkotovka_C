/*Програма читає з текстового файлу 5 чисел
та записує в інший файл їх квадрат*/

#include <stdio.h>
#include <math.h>

int main(){
  FILE *numbers, *kvadrat;
  char name1[] = "numbers.txt", name2[] = "kvadrat.txt";
  int digit[5] = {49, 25, 64, 10, 2};
  double integers[5];

  numbers = fopen(name1, "w");
  for (int i = 0; i <= 4; i++) {
    fprintf(numbers, "%d ", digit[i]);
  }
  fclose(numbers);

  numbers = fopen(name1, "r");
  for (int i = 0; i <= 4; i++) {
    fscanf(numbers, "%lf ", &integers[i]);
  }
  fclose(numbers);

  kvadrat = fopen(name2, "w");
  for ( int i = 0; i <= 4; i++) {
    fprintf(kvadrat,"%lf ", sqrt(integers[i]));
  }
  fclose(kvadrat);

  return 0;
}
