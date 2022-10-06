#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   int a[t],i;
   float s=0;
   for(i=0;i<t;i++)
   {
       cin >> a[i];
       s=s+a[i];
   }
   cout << s/t;
}
