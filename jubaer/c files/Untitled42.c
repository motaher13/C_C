#include <stdio.h>
int main()
{
    double a1,b1,a2,b2,c1,c2,x,y,d;
    printf("a1=");
    scanf("%lf",&a1);
    printf("a2=");
    scanf("%lf",&a2);
    printf("b1=");
    scanf("%lf",&b1);
    printf("b2=");
    scanf("%lf",&b2);
    printf("c1=");
    scanf("%lf",&c1);
    printf("c2=");
    scanf("%lf",&c2);
    d=a1*b2-b1*a2;
    if((int)d==0){
        printf("there is no determined number of x and y.\n",x,y);
    }
    else{
            x=(b2*c1-b1*c2)/d;
            y=(a1*c2-a2*c1)/d;
        printf("x=%0.2lf,y=%0.2lf",x,y);
    }
    return 0;
}
