#include <stdio.h>
int main()
{
    char *p="stop";
    char str[80];
    do{
    printf("enter a string");
    gets(str);
    }while(strcmp(p,str));
    return 0;
}
