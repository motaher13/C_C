#include<stdio.h>
#include<string.h>

static char stack[256];
static char par[256];
int top;

int main(){
    unsigned n, error;

    scanf("%u", &n);
    getchar();

    while(n--){
        gets(par);

        if(strlen(par) & 1)
            printf("No\n");
        else{
            stack[256] = {'\0'};
            top = -1;
            error = 0;

            for(unsigned i = 0; par[i]; ++i){3
()

((()()))
                if(par[i] == ' ')
                    continue;

                if(par[i] == '[' || par[i] == '(')
                    stack[++top] = par[i];
                else if((par[i] == ')' && stack[top] == '(') || (par[i] == ']' && stack[top] == '['))
                    --top;
                else{
                    error = 1;
                    break;
                }
            }

            (error || top > -1) ? printf("No\n") : printf("Yes\n");
        }
    }
    return 0;
}
