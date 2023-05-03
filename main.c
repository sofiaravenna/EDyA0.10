/*10. Defina una función que convierte una cadena de caracteres, pasada por referencia, a
        mayúsculas.
Notas:
a. Según el código ASCII => C+32=c. Donde c pertenece al conjunto de
caracteres alfabéticos en minúscula y C en mayúscula.
b. La finalización de una cadena de caracteres se representa mediante  ́/0 ́*/

#include <stdio.h>
#include<stdlib.h>

int main() {
    char texto[]="hola mundo";
    mayuscula(texto);
    printf("%s",texto);
    return 0;
}

void mayuscula(char *string){
    int i=0;
    while (string[i]!='\0'){
        if (string[i]>='a' && string[i]<='z'){
            string[i]-=32;
        }
        i++;
    }
}
