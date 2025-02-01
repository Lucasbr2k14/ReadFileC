#include <stdlib.h>

typedef struct{
    char *string;
} MyString;

int MyStrLen(char *str) {
    int i = 0;
    while (*(str + i) != '\0') {
        i++;
    }
    return i;
}

int MSstart(MyString *str) {
    str->string = (char*) malloc(sizeof(char));
    *(str->string + 0) = '\0';
}

int MSappend(MyString *str, char a) {

    int len = MyStrLen(str->string);

    str->string = (char*) realloc(str->string, (len + 2) * sizeof(char));
    
    if (str->string == NULL) {
        return -1;
    }

    *(str->string + len) = a;
    *(str->string + len + 1) = '\0';

    return 0;
     
}

int concat(MyString *str, char *strA) {
    int lenMyString = MyStrLen(str->string);
    int lenString = MyStrLen(strA); 
    
    
}

int MSfree(MyString *str) {
    if (str->string != NULL) {
        free(str->string);
        str->string = NULL;
    }
}
