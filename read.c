#include <stdio.h>
#include "ms/mystrings.h"

int main() {
    MyString nome;
    MSstart(&nome);

    FILE *file = fopen("teste.txt", "r");

    if (file == NULL) {
        printf("Erro ao ler o arquivo :(\n");
        return 1;
    }else {
        printf("Arquivo encontrado.\n");
    }

    char a;
    int i = 0;

    while (a != EOF) {
        a = fgetc(file);
        if (a != EOF) {
           MSappend(&nome, a);
        }
        i++;
    }


    fclose(file);
    printf("%s", nome.string);

    MSfree(&nome);

    return 0;
}

