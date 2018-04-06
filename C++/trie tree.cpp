// ==========================================================================
//
//                   Bismillah ir-Rahman ir-Rahim
//
// ==========================================================================

/*************************************************************************
  ââââ      âââââ    ââââââââââ   ââââââââââââ  âââââ   ââââ       ââââ
  âââ â      âââ     âââ    âââ              â   âââ    âââ â     â âââ
  âââ  â     âââ     âââ    âââ            â     âââ    âââ  â   â  âââ
  âââ   â    âââ     âââ    âââ          â       âââ    âââ   âââ   âââ
  âââ    â   âââ     ââââââââââ        â         âââ    âââ         âââ
  âââ     â  âââ     âââ    âââ      â           âââ    âââ         âââ
  âââ      â âââ     âââ    âââ    â             âââ    âââ         âââ
 âââââ      ââââ     âââ    âââ   ââââââââââââ  âââââ  âââââ       âââââ
**************************************************************************/

// Pre_code

#include <bits/stdc++.h>

// header file

#include <sstream>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <complex>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <bitset>
#include <list>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <fstream>
#include <numeric>
#include <cstring>

using namespace std ;

//define function

#pragma comment(linker, "/STACK:667772160")
#define forln(i,a,n) for(int i=a ; i<n ; i++)
#define foren(i,a,n) for(int i=a ; i<=n ; i++)
#define forg0(i,a,n) for(int i=a ; i>n ; i--)
#define fore0(i,a,n) for(int i=a ; i>=n ; i--)
#define pb push_back
#define pp pop_back
#define clr(a,b) memset(a,b,sizeof(a))
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf1ll(a) scanf("%lld",&a)
#define sf2ll(a,b) scanf("%lld %lld",&a,&b)
#define pii acos(-1.0)
#define jora_int pair<int,int>
#define jora_ll pair<long long,long long>
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define Max 150000000+9
#define sz 100000+7
#define Mod 1000000007
#define EPS 1e-10
#define ll long long
#define ull unsigned long long
#define fs first
#define sc second
#define wait system("pause")
#define sf scanf
#define pf printf
#define mp make_pair
#define ps pf("PASS\n")
#define Read freopen("C:\\Users\\RONIN-47\\Desktop\\input_output\\input.txt","r",stdin)
#define Write freopen("C:\\Users\\RONIN-47\\Desktop\\input_output\\output.txt","w",stdout)
//debug

template<class T1> void deb(T1 e1)
{
    cout<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)
{
    cout<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)
{
    cout<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}

// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//close

int char_num(char a)
{
    int tp = 0 ;

    if(isupper(a))
    {
        tp = a - 'A' ;
        tp += 26 ;
    }

    else
        tp = a - 'a';

    return tp ;
}

string str ;
int s_len , node[100000+5][53] , id , cont[100000+5] ;

int new_node()
{
    for(int i=0 ; i<52 ; i++)
        node[id][i] = 0 ;

    cont[id] = 0 ;

    return id++ ;
}

void add(int cur)
{
    int a ;
    for(int i=0 ; i<s_len ; i++)
    {
        a = char_num(str[i]);

        if(node[cur][a] == 0)
            node[cur][a] = new_node();

        cur = node[cur][a] ;
    }

    cont[cur]++;
}

int query(int cur)
{
    int a;

    for(int i=0 ; i<s_len ; i++)
    {
        a = char_num(str[i]);

        if(node[cur][a] == 0)
            return 0 ;

        cur = node[cur][a] ;
    }
    return cont[cur] ;
}


int main()
{
    //freopen("input.txt","r",stdin);
    int tcase , n , m , len , root ;
    char tstr[sz] ;

    sf1(tcase);

    foren(cas,1,tcase)
    {
        sf1(n);

        id = 0 ;

        root = new_node() ;

        for(int i=0  ; i<n ; i++)
        {
            sf("%s",tstr);

            len = strlen(tstr);

            str.clear();

            for(int j=1 ; j+1<len ; j++)
                str += tstr[j] ;

            sort(str.begin(),str.end());

            if(len-1)
                str.insert(str.begin(),tstr[len-1]);

            str.insert(str.begin(),tstr[0]);

            s_len = len ;

            add(root);
        }

        ll ans = 1 ;

        sf1(m);
        getchar();

        pf("Case %d:\n",cas);

        for(int i=0 ; i<m ; i++)
        {
            len = 0 ;

            while(tstr[len] = getchar())
            {
                if(tstr[len] == '\n' or tstr[len] == EOF)
                    break;

                len++;
            }
//deb(len);
            str.clear();

            bool ok = 1 , ok2 ;
            char ch = tstr[0] , bg ;
            ans = 1 ;

            for(int j=0 ; j<len ; j++)
            {
                if(ok and tstr[j] != ' ')
                {
                    bg = tstr[j] ;
                    ok = 0 ;
                    str.clear();
                }

                else if(tstr[j] == ' ' and !ok)
                {
                    //deb(j,len,str);

                    ok2 = 0 ;

                    if(!str.empty())
                        str.erase(str.begin()) , ok2 = 1 ;

                    sort(str.begin(),str.end());

                    if(ok2)
                    {
                        str.insert(str.begin(),ch);
                        str.insert(str.begin(),bg);
                    }

                    else
                        str.insert(str.begin(),bg);
//deb(str);
                    s_len = str.length();
                    ans = ans*1LL*query(root);
                    ok = 1 ;
                }

                else if(!ok and ch != ' ')
                    str += ch ;
//deb(ch,j);
                ch = tstr[j] ;
            }

            if(len and tstr[len-1] != ' ' and !ok)
            {
                ok2 = 0 ;

                if(!str.empty())
                    str.erase(str.begin()) , ok2 = 1 ;

                sort(str.begin(),str.end());

                if(ok2)
                {
                    str.insert(str.begin(),ch);
                    str.insert(str.begin(),bg);
                }

                else
                    str.insert(str.begin(),bg);
//deb(str);
                s_len = str.length();
                ans = ans*1LL*query(root);
            }

            pf("%lld\n",ans);
        }
    }

    return 0 ;
}
