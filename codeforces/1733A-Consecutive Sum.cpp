#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,k,i,j;
    char c='A';
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n],c[n],maxi,d[n],j,l=0;
        long long int s=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            c[i] = i%k;
        }
        for(i=0;i<k;i++)
        {
            maxi= a[i];
            for(j=0;j<n;j++)
            {
                if(c[i]==(j%k))
                {
                    if(a[j] > maxi)
                    {
                        maxi = a[j];
                    }
                }
            }
            s = s + maxi;
        }
        cout << s << endl;

    }
}
