/*Тест бінарного файлу
  -remove("test.txt")
  -rename("old.txt", "new.txt")
  -MoveFile(L"C:\\test.txt", L"D:\\test.txt")
  -fseek( out, 0L, SEEK_SET )
  -long l = ftell( f )*/

#include <stdio.h>

int main(){
  int w[3] = {1, 2, 3}, a[3];
  FILE *out, *in;

  out = fopen("data.dat", "w");
  fwrite(w, sizeof(int), 3, out);
  fclose(out);

  in = fopen("data.dat", "r");
  fread(a, sizeof(int), 3, in);
  fclose(in);
  for (size_t i = 0; i < 3; i++) {
    printf("%d\n", a[i]);
  }

  return 0;
}
