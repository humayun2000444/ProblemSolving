#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,k,m,n,d,i,mm,a=0,b=0,c=0,e=0,m1,m2;
    cin >> k >> l >> m >> n >> d;

    for(i=1;i<=d;i++)
    {
        if(i%l==0 || i%k==0 || i%m==0 || i%n==0)a++;
    }

    cout << a;
    return 0;
}
