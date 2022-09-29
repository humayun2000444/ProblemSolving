#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n=0,m=0,o=0;
    cin >> t;
    string a;
    cin >> a;

        for(i=0;i<t;i++)
    {
        if(a[i]=='R' && a[i+1]=='R')m++;
        if(a[i]=='G' && a[i+1]=='G')n++;
        if(a[i]=='B' && a[i+1]=='B')o++;
    }
    cout << m+n+o;

    return 0;
}
