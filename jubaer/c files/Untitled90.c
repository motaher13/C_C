#include <stdio.h>
int string_length(char str[])
{
    int i=0,length=0;
    while(str[i]!='\0'){
       i++;
       length++;
    }
    return length;
}
int main()
{
    int length;
    char country[122];
    while(1==scanf("%s",country)){
        length=string_length(country);
        printf("length:%d\n",length);
     }
     return 0;
}
