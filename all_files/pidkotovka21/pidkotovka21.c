/*Пошук поділом навпіл*/

#include <stdio.h>

#define N 5
int write_array(int m[N]);
int sort_array(int m[N]);

int main(){
  int m[N], l = 0, r = N, k, x;

  write_array(m);
  sort_array(m);

  printf("Key?\n");
  scanf("%d", &x);

  while (l < r) {
    k = l + (r - l) / 2;
    if(m[k] == x)
      break;
    if(m[k] < x)
      l = k + 1;
    else r = k;
  }
  if(m[k] == x)
    printf("%d\n", ++k);
  else
    printf("empty");
}

int write_array(int m[N]){
  for(int i = 0; i < N; i++) {
    scanf("%d", &m[i]);
  }
}

int sort_array(int m[N]){
  int i = 0, t;

  while (i < N - 1) {
    if(m[i + 1] >= m[i])
      ++i;
    else{
      t = m[i];
      m[i] = m[i + 1];
      m[i + 1] = t;
      i = 0;
    }
  }
}
