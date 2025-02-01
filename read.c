#include <stdio.h>
#include "ms/mystrings.h"

int main() {
    MyString nome;
    MSstart(&nome);

    // FILE *file = fopen("teste.txt", "r");

    // if (file == NULL) {
    //     printf("Erro ao ler o arquivo :(\n");
    //     return 1;
    // }else {
    //     printf("Arquivo encontrado.\n");
    // }

    // char a;
    // int i = 0;

    // while (a != EOF) {
    //     a = fgetc(file);
    //     if (a != EOF) {
    //        MSappend(&nome, a);
    //     }
    //     i++;
    // }


    // fclose(file);
    // printf("%s\n", nome.string);

    char teste[10] = "Hello, ";
    char teste2[10] = "World";

    MSconcat(&nome, teste);
    MSconcat(&nome, teste2);

    printf("%i\n", MyStrLen(nome.string));
    printf("%s\n", nome.string);

    MSfree(&nome);

    return 0;
}

