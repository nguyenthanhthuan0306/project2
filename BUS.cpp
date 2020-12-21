#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int i,j,n,s[15][105],res,a[15];
void nhap()
{
    for(i=1;i<=10;i++)
        {scanf("%d",&a[i]);}
    cin>>n;
    res = 1000000;
}
void process()
{
    for (j=1;j<=n;j++) s[1][j]=a[1]*j;
    for (i=2;i<11;i++)
        for (j=1;j<=n;++j)
        {
            if (j>=i)
            {
                s[i][j]=min(a[i]+s[i][j-1],s[i-1][j]);
            }
            else s[i][j]=s[i-1][j];
            if (j==n) res=min(res,s[i][j]);
        }
    printf("%d",res);
}

int main()
{
    freopen("BUS.INP","w",stdin);
    freopen("BUS.OUT","w",stdout);
    nhap();
    process();
}
