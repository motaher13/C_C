#include <stdio.h>
void f1(int a);
void f2(int b);
int main()
{
     f1(80);
     return 0;

}
void f1(int a)
{
    if(a)f2(a-1);
    printf("%d",a);


}
void f2(int b)
{
     if(b)f1(b-1);
     printf("");


}
