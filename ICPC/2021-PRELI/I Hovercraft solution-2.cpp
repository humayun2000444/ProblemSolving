#include <iostream>
using namespace std;

int main() {
	int t=1000;
	float a,b;
	while(t--)
	{
		cin >> a >> b;
		if(a==0 && b==0) break;
		cout << (b+(a*0.75)) << "00"<< endl;
		
	}
	return 0;
}
