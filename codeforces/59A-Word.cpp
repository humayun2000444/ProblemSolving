#include <iostream>
#include <cstring>
#include<string>


using namespace std;

int main()
{
    string a;
    cin >> a;
    int s=a.size(),i,x,u=0,l=0;


    for(i=0;i<s;i++)
    {
        if(a[i]>='A' && a[i]<='Z')u++;
        else l++;
    }
    if(u>s/2)
    {
        for (int x=0; x<s; x++)
        putchar(toupper(a[x]));
    }
    else
    {
        for (int x=0; x<s; x++)
        putchar(tolower(a[x]));
    }
    return 0;
}
