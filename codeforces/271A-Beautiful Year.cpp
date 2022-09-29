#include <iostream>

using namespace std;

int main()
{
    int m,n,o,p,q,r,a;
    cin >> a;

    while(1)
    {
        a=a+1;
        m=a%10;
        n=a/10;
        o=n%10;
        p=n/10;
        q=p%10;
        r=p/10;

        if(m!=o && m!=q && m!=r && q!=o && q!=r && o!=r)
            {
                cout << a << endl;
                break;
            }
    }

    return 0;
}
