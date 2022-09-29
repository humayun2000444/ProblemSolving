#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z,m=0,n=0,o=0;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        m=m+x;
        n=n+y;
        o=o+z;
    }
    if(m==0 && n==0 && o==0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}
