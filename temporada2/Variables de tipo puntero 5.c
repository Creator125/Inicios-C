/*
Se tienen el siguiente programa:
#include <stdio.h>
#include<conio.h>

int main()
{
  float z1,z2;
  float *pf;
  pf=&z1;
  *pf=10.2;
  pf=&z2;
  *pf=20.90;
  printf("%0.2f %0.2f",z1,z2); // Se imprime ?
  getch();
  return 0;
}
Indicar que valor se imprime en la llamada a printf.

https://www.youtube.com/watch?v=UhTo24VQuT8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=144&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

int main(){
  float z1,z2;
  float *pf;

  pf=&z1;
  *pf=10.2;
  pf=&z2;
  *pf=20.90;

  printf("%0.2f   %0.2f",z1,z2); // Se imprime '10.20   20.90'

  getch();
  return 0;
}