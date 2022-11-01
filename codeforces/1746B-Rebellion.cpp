#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin >> t;
    while(t--)
    {
        int n,p1,p2,c=0,l;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        l=0;
        n=n-1;
        while(l<n)
        {
            if(a[l]==1 && a[n]==0)
            {
                c++;
                l++;
                n--;
            }
            else if(a[l]==0)
                l++;
            else if(a[n]==1)
                n--;
        }

        cout << c << endl;
    }
}
