#include <stdlib.h>

void limpiar()
{
#ifdef _32WIN
  system("cls");
#else
  system("clear");
#endif
}
