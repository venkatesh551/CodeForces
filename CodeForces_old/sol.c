#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <map>
#include <queue>
#define maxn 200005
using namespace std;

int n,m,k;
long long a[maxn],sum[maxn];

int main()
{
    int i,j,s,st,e;
    long long ma,t,tmp,prema;
    scanf("%d%d",&n,&k);
    sum[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    ma=-1;
    prema=-1;
    for(j=k+1;j<=n-k+1;j++)
    {
        t=sum[j+k-1]-sum[j-1];
        tmp=sum[j-1]-sum[j-k-1];
        if(tmp>prema)
        {
            s=j-k;
            prema=tmp;
        }
        if(prema+t>ma)
        {
            st=s;
            e=j;
            ma=prema+t;
        }
    }
    printf("%d %d\n",st,e);
    return 0;
}
