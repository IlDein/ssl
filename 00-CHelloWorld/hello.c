#include <stdio.h>
int main(void){

    char texto [50] ={"Hello, World!,Version c23\n "};

    printf(texto);

    FILE * f = fopen("archivoTexto.txt","w+b");
    fwrite(&texto, sizeof(texto), 1, f);
    fclose(f);

    return 0;
}