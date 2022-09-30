#include<iostream>
using namespace std;
int main(){
    int n,i,maxi,mini,maxI=0, miniI=0, minimum,c=0,d=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    maxi = a[0];
    mini = a[0];
    for (int j = 1 ; j < n; j++) {
        if(a[j] > maxi)
        {
            maxi = a[j];
            maxI = j;
        }
        if(a[j] <= mini){
            mini = a[j];
            miniI = j;
        }

    }
    if(maxI > miniI)
    {
        cout<<((n-1)-miniI) + (maxI-1) << endl;
    }
    else cout<<((n-1)-miniI) +maxI << endl;

}
