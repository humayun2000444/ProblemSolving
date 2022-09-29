#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s,i,c=0,d=0;
    string a;
    cin >> a;
    s=a.size();
    if(s==1) cout << "NO" << endl;
    else
    {
        for(i=0;i<s;i++)
        {
            if(a[i]=='7')
                c++;
            if(a[i]=='4')
                c++;
        }
        //cout << s << " " << c << " " ;
    if(c==4 || c==7)cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
