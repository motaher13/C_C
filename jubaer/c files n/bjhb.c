#include <stdio.h>
int fact(int n){
    if(n==0)return 0;
    else return n+fact(n-1);



}
int main()
{
    printf("%d",fact(5));



    return 0;
}
