/*Багатовимірний масив. Прямокутна матриця
вводиться користувачем. Знаходиться найбільше
значення і виводить воно, і його рядок з стовпчиком.
Підраховує кількість 0 елементів.

  -Створення масиву в фукнкцію
  -Чось не можна вводити масив 5 1*/

#include <stdio.h>
#include <stdlib.h>

void print_array(double **matrix, int height, int width);
void scan_array(double **matrix, int height, int width);
void clear_memory(double **matrix, int width);
/*void most_number(double **matrix, int height, int width){
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++)
      printf("%g\t", matrix[i][j]);
    printf("\n");
  }
}*/

int main() {
  int height, width;
  double **matrix ;

  scanf("%d %d", &height, &width);

  matrix = (double**) malloc(height * sizeof(double*));
  for (int i = 0; i < width; i++)
    matrix[i] = (double*) malloc(width * sizeof(double));

  scan_array(matrix, height, width);
  print_array(matrix, height, width);
  clear_memory(matrix, width);
  return 0;
}

void print_array(double **matrix, int height, int width){
  printf("Matrix:\n");
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++)
      printf("%g\t", matrix[i][j]);
    printf("\n");
  }
}

void scan_array(double **matrix, int height, int width){
  for (int i = 0; i < height; i++)
    for (int j = 0; j < width; j++)
      scanf("%lf", &matrix[i][j]);
}

void clear_memory(double **matrix, int width){
  for (int i = 0; i < width; i++)
    free(matrix[i]);
  free(matrix);
}
