#include <stdio.h>
int main(){

    recurse(0);

    return 0;
}
void recurse(int i){
    if(i<20){

     printf("%d",i);
      recurse(i+1);
    }
}
