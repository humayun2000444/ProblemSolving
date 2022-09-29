#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5],i,j,x,y;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
                {
                    x=i+1;
                    y=j+1;
                }
        }
    }
    if(x<3)x=3-x;
    else x=x-3;
    if(y<3)y=3-y;
    else y=y-3;

    cout << x+y << endl;
    return 0;
}
