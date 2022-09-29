#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  int m,i;
    string a,b;
    cin >> a >>b;
 
    m=a.size();
    char c[m];
    for(int i=0;i<m;i++)
    {
        if(a[i]=='0' && b[i]=='0') c[i]='0';
        if(a[i]=='1' && b[i]=='1') c[i]='0';
        if(a[i]=='1' && b[i]=='0') c[i]='1';
        if(a[i]=='0' && b[i]=='1') c[i]='1';
    }
    for(i=0;i<m;i++)
        cout << c[i];
 
 
}
