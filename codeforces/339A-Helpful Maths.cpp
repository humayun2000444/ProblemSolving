#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int x,n,i,j=0;
    string a;
    cin >> a;
    n=a.size();
    int z=n-(n/2);
    int b[z];
    if(n==1)
        cout << a;
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!='+')
            {
                stringstream strm;
                strm << a[i];
                x = stoi(strm.str());
                b[j]=x;
                j++;
            }
        }
        int m=sizeof(b)/sizeof(b[0]);
        sort(b,b+m);

        //for(i=0;i<m;i++)
        cout << b[0] << "+";
        for(i=1;i<z-1;i++)
            cout  << b[i] << "+";
        cout << b[z-1];
    }


    return 0;
}

 
