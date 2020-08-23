/*Основне про структури
  -Порівнювати структури не можна, а тіки їх об'єкти
  -typedef скорочення всього, typedef long int li;
  -st st1[N];
  -(*p).x = -5; то саме що p -> x = -5; - непряме звертання
*/

#include <stdio.h>

int main(){
  typedef struct tagStudent {
    char name[20], surname[20];
    int birth, vstyp, specialst;
  } st;
  st st1 = {"Igor", "Chuchman", 2001, 2020, 126};
  printf("Name: %s; Surname: %s; Birthday: %d; Vstyp: %d; Specialst: %d;",
  st1.name, st1.surname, st1.birth, st1.vstyp, st1.specialst);

  return 0;
}
