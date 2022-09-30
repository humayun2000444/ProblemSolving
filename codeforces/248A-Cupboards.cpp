#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x=0,y=0,i,r=0,x1=0,y1=0;
    cin >> t;
    int a[t],b[t];
    for(i=0;i<t;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<t;i++)
    {
        if(a[i]==1)x++;
        if(a[i]==0)x1++;
        if(b[i]==0)y1++;
        if(b[i]==1)y++;
    }

    r = min(x1,x) + min(y,y1);
    cout<<r<<endl;
    return 0;
}
