/*Програма для тесту роботи файлів*/

#include <stdio.h>

int main()
{
  filewriter(); //Запис в файл
  filereader(); //Читання з файлу
  return 0;
}

void filereader() {
  int x;

  FILE *S1 = fopen("filetest7.txt", "r");
  fscanf(S1, "Your number: %d", &x);//читання файлу
  printf("%d", x);
  fclose(S1);
}

void filewriter() {
  int x; //змінна якою записується число

  printf("Enter number:  ");
  scanf("%d", &x);
  FILE *S1 = fopen("filetest7.txt", "w"); //створення і відкриття файлу
  fprintf(S1, "Your number: %d", x); //запис в файл
  fclose(S1); //закриття файлу
}
