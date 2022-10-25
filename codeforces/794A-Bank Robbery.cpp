#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,x=0,i;
    cin >> a >> b >> c >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]>b && arr[i]<c)
            x++;
    }
    cout << x << endl;
}
