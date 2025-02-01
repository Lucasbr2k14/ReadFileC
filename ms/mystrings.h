#define MYSTRINGS_H
#ifdef MYSTRINGS_H

typedef struct {
    char *string;
} MyString;

int MyStrLen(char *str);
int MSstart(MyString *str);
int MSappend(MyString *str, char a);
int MSfree(MyString *str);
int MSconcat(MyString *str, char *strA);

#endif