/*Робота з рядками. Програма підраховує кількість пробілів.
  -0 символ 
  -scanf("%19s", str), текст до пробіла
  -fgets(str, N, stdin), пробіли можна
  -sprintf(str, ... , Narg);, записує в рядок
  -sscanf(str, ... , Narg);, зчитує з рядка*/

#include <stdio.h> // isdigit, isspace, isalpha, isalnum, islowerm, isupper;
#include <string.h> //strlen(1arg); strcpy(1to, 2from); strcat(1to, 2from); strcat(1arg, 2arg);

int main(){
  char str[100];
  int n = 0;
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != 0; i++) {
    if(str[i] == ' ') n++;
  }
  printf("%d\n", n);
  return 0;
}
