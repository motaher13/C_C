#include <stdio.h>
int main()
{
    int i,j,k,ck=0,p,kk=0,tt=0;
    char str[5][5],l;
    char seq[100];
    for(i=0;i<5;i++){
    gets(str[i]);
    }
    scanf("%s",seq);
    for(k=0;seq[k]!=0;k++){
            ck=0;
   if(seq[k]=='A'){
   for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){

   l=str[i][j];
   str[i][j]=str[i-1][j];
   str[i-1][j]=l;
   ck=1;
   break;

   }
   }
   if(ck==1)break;
   }
   }
   else if(seq[k]=='B'){
   for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){

   l=str[i][j];
   str[i][j]=str[i+1][j];
   str[i+1][j]=l;
   ck=1;
   break;

   }
   }
   if(ck==1)break;
   }
   }
    else if(seq[k]=='R'){
      for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){

   l=str[i][j];
   str[i][j]=str[i][j+1];
   str[i][j+1]=l;
   ck=1;
   break;

   }
   }
   if(ck==1)break;
   }
   }
    else if(seq[k]=='L'){
      for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){

   l=str[i][j];
   str[i][j]=str[i][j-1];
   str[i][j-1]=l;
   ck=1;
   break;

   }
   }
   if(ck==1)break;
   }
   }
}
  for(i=0;i<5;i++){
            p=0;
        for(j=0;j<strlen(str[i]);j++){
            printf("%c",str[i][j]);
    if(p==4)break;
    p++;
        }
        printf("\n");
    }


}
