#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,b=0;
    string s;
    cin>>s;
    l=s.size();
    if(l<6 || l>8)
        b=1;
    else if(l==7)
    {
        if(s[1]=='o'||s[1]=='O'||s[1]=='0')
        {
            if((s[2]='('&& s[3]==')')||(s[2]='['&& s[3]==']')||(s[2]='<'&& s[3]=='>'))
                b=0;
        }
        else if((s[1]='('&& s[2]==')')||(s[1]='['&& s[2]==']')||(s[1]='<'&& s[2]=='>'))
        {
            if(s[3]=='o'||s[3]=='O'||s[3]=='0')
                b=0;
        }
        else
            b=1;
    }
    else if(l==8)
    {
        if(((s[1]='('&& s[2]==')')||(s[1]='['&& s[2]==']')||(s[1]='<'&& s[2]=='>'))&& ((s[3]='('&& s[4]==')')||(s[3]='['&& s[4]==']')||(s[3]='<'&& s[4]=='>')))
            b=0;
        else
            b=1;
    }
    else if(l==6)
    {
        if((s[1]=='o'||s[1]=='O'||s[1]=='0')&& (s[2]=='o'||s[2]=='O'||s[2]=='0'))
            b==0;
        else
            b=1;
    }

    if(b==0)
    {
        if(s[0]!='g'&&s[1]!='G')
            b=1;
        if(s[l-1]!='e'&&s[l-1]!='E' && s[l-1]!='3')
            b=1;
        if(s[l-2]!='l'&&s[l-2]!='L' && s[l-2]!='I')
            b=1;
        if(s[l-3]!='g'&&s[l-3]!='G')
            b=1;
    }

    if(b==0)
        printf("True\ng");
    else
        printf("False\n");

}