#include <stdio.h>
void swap(int *i,int *j);
int main()
{
    int num1,num2;
    num1=78*5;
    num2=6/3;
    printf("num1:%d num2:%d\n",num1,num2);
    swap(&num1,&num2);
    printf("num1:%d num2:%d\n",num1,num2);




return 0;
}
void swap(int *i,int *j)
{
     int temp;
     temp=*j;
     *j=*i;
     *i=temp;



}
