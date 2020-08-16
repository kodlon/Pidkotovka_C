/*Програма, яка знаходить з точністю до h те значення
x, при якому функція f(x) = x+8/x^2+x+1 досягає свого найбільшого значення
 на проміжку [a, b]. Числа a, b, h вводить користувач.*/

#include <stdio.h>
#include <math.h>

int main(){
  float a, b, h, f, m = 0;

  scanf("%f %f %f", &a, &b, &h);

  for(float i = a; i <= b; i += h){
   f = (i + 8) / pow(i, 2) + i + 1;
   if(f > m) m = f;
  }

  printf("%f", m);
  return 0;
}
