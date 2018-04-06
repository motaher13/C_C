#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define PB push_back
#define pi acos(-1.0)
#define eps 1e-9
long sum[120][120];

int main()
{
int n,a,b,c,d,arr[120][120];
long max,temp;
while(cin>>n)
        {
            max=0;
            for(a=1;a<=n;a++)
                for(b=1;b<=n;b++)
                    cin>>arr[a][b];

            for(a=1;a<=n;a++)
                for(b=1;b<=n;b++)
                    for(c=1;c<=a;c++)
                        for(d=1;d<=b;d++)
                            sum[a][b]+=arr[c][d];

            for(a=0;a<=n;a++)
                for(b=0;b<=n;b++)
                    for(c=0;c<=a;c++)
                        for(d=0;d<=b;d++)
                            {
                                temp=sum[a][b]-sum[a][d]-sum[c][b]+sum[c][d];
                                if(temp>max)
                                max=temp;
                            }
            cout<<max<<endl;
            clr(sum);
        }
        getchar();
return 0;
}
