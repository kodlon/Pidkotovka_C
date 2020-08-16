/*Програма визначає, яке число більше
з використанням функції*/

#include <stdio.h>

int more_or_less(int a, int b);

int more_or_less(int a, int b){
 if (a < b) return b;
 return a;
}

int main(){
 int a, b;

 scanf("%d %d", &a, &b);
 printf("%d", more_or_less(a, b));
 return 0;
}
