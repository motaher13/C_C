#include <stdio.h>
#include <string.h>
int main()
{
    int lenth,k,sum;
    char str[1000];
   while (gets(str)){
    lenth=strlen(str);
    printf("%d",lenth);
    sum=0;
    for(k=0;k<lenth;k++){
    sum=sum*10+(int)str[k]-48;
    sum=sum%11;

    }
    if(sum==0&&lenth==1){
            break;
    }
    else if(sum==0){
    printf("%s is a multiple of 11.\n",str);
    }
    else printf("%s is not a multiple of 11.\n",str);
   }
   return 0;

}
