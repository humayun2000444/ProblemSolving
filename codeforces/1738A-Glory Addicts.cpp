#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n,i,x=0,y=0,sum=0,k=0,j=0,sum1=0,sum2=0;
        cin >> n;
        int a[n],b[n],a1[n],b1[n];

        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
            if(a[i]==0)
            {
                x++;
                a1[j]=b[i];
                j++;
            }
            if(a[i]==1)
            {
                y++;
                b1[k]=b[i];
                k++;
            }
        }
        if(x==n || y==n)
        {
            for(i=0;i<n;i++)
            {
                sum=sum+b[i];
            }
        }
        else if(x==y)
        {
            sort(b,b+n);
            sum=b[0];
            for(i=1;i<n;i++)
            {
                sum=sum + (b[i]*2);
            }
        }
        else if(x<y)
        {
            sort(b1,b1+y,greater<int>());

            for(i=0;i<x;i++)
            {
                sum1=sum1+(a1[i]*2);
                sum2=sum2+(b1[i]*2);
            }
            for(i=x;i<y;i++)
            {
                sum2=sum2+b1[i];
            }
            sum=sum1+sum2;
        }
        else if(y<x)
        {
            sort(a1,a1+x,greater<int>());

            for(i=0;i<y;i++)
            {
                sum1=sum1+(b1[i]*2);
                sum2=sum2+(a1[i]*2);
            }
            for(i=y;i<x;i++)
            {
                sum2=sum2+a1[i];
            }
            sum=sum1+sum2;
        }
        cout << sum << endl;
    }
}
