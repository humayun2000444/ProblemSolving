#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,i=0;
    string a;
    cin>>a;
    n=a.size();
    for(i=0;i<n;i++)
    {
        if(a[i]=='.')
        {
                cout << 0;
                //i++;
        }
        if(a[i]=='-' && a[i+1]=='.')
        {
            cout << 1;
            i=i+1;
        }
        if(a[i]=='-' && a[i+1]=='-')
        {
            cout << 2;
            i=i+1;
        }
    }
    return 0;
}
