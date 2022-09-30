#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,i,c=0,mini,maxi;
    cin>>n;
    int number[n];
    for(i=0;i<n;i++)
        cin>> number[i];
    mini=number[0];
    maxi=number[0];

    for(i=0;i<n;i++)
    {
        if(number[i]>maxi)
        {
            maxi=number[i];
            c++;
        }
        if(number[i]<mini)
        {
            mini=number[i];
            c++;
        }
    }
    cout << c;
    return 0;
}
