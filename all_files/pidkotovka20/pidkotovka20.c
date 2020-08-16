/*Метод бульбашки*/

#include <stdio.h>

#define N 5
double write_array(double m[N]);
double print_array(double m[N]);

int main(){
  int i = 0;
  double m[N], t;

  write_array(m);

/*--------------------------Бульбаш-----------------------*/
  while (i < N - 1) {
    if(m[i + 1] >= m[i]) //Перевіряє чи наступний елемент
      ++i;               //більший поточного, якщо так то
                         //перехід до наступного елементу

    else{                //Якщо ні, то поточний елемент
      t = m[i];          //запам'ятовується. Далі поточним
      m[i] = m[i + 1];   //елементом стає наступний. Після
      m[i + 1] = t;      //чого наступний дорівнює поточному
      i = 0;             //і перехід на початок масиву
    }
  }
/*--------------------------------------------------------*/

  print_array(m);
  return 0;
}

double write_array(double m[N]){
  for(int i = 0; i < N; i++) {
    scanf("%lf", &m[i]);
  }
}

double print_array(double m[N]){
  for(int i = 0; i < N; i++) {
    printf("%lf\n", m[i]);
  }
}
