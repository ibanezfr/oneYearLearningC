#include <stdlib.h>

void limpiar_pantalla()
{
#ifdef _WIN32
  system("cls"); // Comando para limpiar la pantalla en Windows
#else
  system("clear"); // Comando para limpiar la pantalla en sistemas
                   // basados en Unix
#endif
}
