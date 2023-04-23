#include <stdio.h>
#include <stdlib.h>
int main() {
char *nombreArchivo = "output.txt";
char *modo = "w";
FILE *archivo = fopen(nombreArchivo, modo);
printf("Hola Mundo!\n");
if (archivo == NULL) {
   printf("Error abriendo archivo %s", nombreArchivo);
   return 1;
}
fprintf(archivo, "Hola mundo!\n");
fclose(archivo);

system("pause");
return 0;
}
