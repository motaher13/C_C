#include <stdio.h>
int main()
{
    int n;
    n=2;
    while(n<=100){
         printf("%d\n",n);
         n++;
         if(n>10){
              break;
         }
    }
    return 0;
}
