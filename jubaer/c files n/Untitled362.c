#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="pointers are esy to use";
    char str2[80],*p1,*p2;
    p1=str1+strlen(str1)-1;
    p2=str2;
    while(p1>=str1)
    *p2++=*p1--;
    *p2='\0';
    printf("%s %s",str1,str2);
    return 0;
}
