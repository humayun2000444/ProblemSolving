#include <iostream>

using namespace std;

int main() {
    int  i,n,s=0,max=0;
        cin >> n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i] >> b[i];
        }
        for(i=0;i<n;i++)
        {
            s+=b[i]-a[i];
            if(s>max)
                max=s;
        }
        cout<<max;

    return 0;
}
