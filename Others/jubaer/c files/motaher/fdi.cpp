#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
char str[30000];
void paren(int p);
void space();
using namespace std;
int ck;

void  space(){
    int i,j=0;
 char str1[300];
   for(i=0;str[i];i++){
    if(str[i]=='('||str[i]==')'||str[i]=='['||str[i]==']'){
        str1[j]=str[i];
        j++;
    }
   }
   strcpy(str,str1);
   if(j==0)return;

   paren(0);
}
void paren(int p){
     int i=p;
     if(str[i]=='['&&str[i+1]==']'){
        str[i]=' ',str[i+1]=' ';
        space();
     }
       if(str[i]=='('&&str[i+1]==')'){
        str[i]=' ',str[i+1]=' ';
        space();
     }
     if(str[i]=='['&&(str[i+1]=='('||str[i+1]=='['))paren(i+1);
      if(str[i]=='('&&(str[i+1]=='('||str[i+1]=='['))paren(i+1);
      if(str[i]=='['&&str[i+1]==')'){
        ck=0;
        return;
     }
       if(str[i]=='('&&str[i+1]==']'){
      ck=0;
      return;
     }
      if(str[i]==')'||str[i]==']'){
      ck=0;
      return;
     }

}
int main()
{

  char ch;
   int i,j,k,l,m,n,u,h,g;
   g=0;
   cin>>h;
  getchar();
   while(gets(str)){
 i=0;

        k=0,l=0,m=0,n=0;
 ck=1;
 if(strlen(str)==0){

        printf("Yes\n");

 }
else {
    for(i=0;str[i];i++){
        if(str[i]=='(')m++;
        if(str[i]==')')n++;
        if(str[i]==']')k++;
          if(str[i]=='[')l++;
    }
    if(l!=k||m!=n)ck=0;
     if(ck==1){
  space();
    }

  if(ck==0)cout<<"No"<<endl;
  if(ck==1)cout<<"Yes"<<endl;

   }
   g++;
   if(g==h)break;

   }

 return 0;
}
