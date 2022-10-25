#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,i,j;
    cin >> n >> x >> y;
    int a[x+1],b[y+1],arr[n+1];
    for(i=1;i<=n;i++)
    {
        arr[i]=2;
    }
    for(i=0;i<x;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<y;i++)
    {
        cin >> b[i];
    }
    for(i=0;i<x;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==j)
            {
                arr[j]=1;
            }
        }
    }


    for(i=1;i<=n;i++)
    {
        cout << arr[i] << " ";
    }

}
