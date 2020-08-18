/*Лінійний пошук, бульбашка. Але з динамічним масивом
Доробити якщо не буде лень:
  -Пошук ключа поділом навпіл.
  -Створення масиву в окрему функцію.*/

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(double *array, int n);
void linear_search(double *array, int n);
void print_array(double *array, int n);
void write_array(double *array, int n);

int main(){
  int n;

  scanf("%d", &n);

  double *array = (double*) malloc(n * sizeof(double));

  write_array(array, n);
  bubble_sort(array, n);
  printf("Sorted:\n");
  print_array(array, n);
  linear_search(array, n);
  free(array);

  return 0;
}

void print_array(double *array, int n){
  for (int i = 0; i < n; i++) {
    printf("%lf\n", array[i]);
  }
}

void write_array(double *array, int n){
  for (int i = 0; i < n; i++) {
    scanf("%lf", &array[i]);
  }
}

void bubble_sort(double *array, int n){
  int i = 0, tmp;
  while (i < n - 1) {
    if (array[i] >= array[i + 1]) {
      tmp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = tmp;
      i = 0;
    }
    else
      ++i;
  }
}

void linear_search(double *array, int n){
  printf("Key?\n");
  double x;
  scanf("%lf", &x);
  for (int i = 0; i < n; i++) {
    if(array[i] == x){
      printf("key is: %g; index in array: %d;", x, i);
      break;
    }
  }
}
