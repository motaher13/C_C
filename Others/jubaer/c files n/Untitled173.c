#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the fucking number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
       if(n%i==0)printf("%d is not prime",n);
       if(n%i!=0)printf("it is  prime");

    return 0;
    }
}

