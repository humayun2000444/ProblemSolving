#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, i, j, flag, count=0;
	int temp;


	
	cin >> a; // Take input


	
	cin >> b; 

	
	for (i = a+1; i <= b; i++) {
		if (i == 1 || i == 0)
			continue;

		flag = 1;

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1){
			
			temp=i;
			count++;
		}
	}
	
	if(count==2){
	    cout<<"NO";
	}else if (count==1 && b==temp){
	    cout<<"YES";
	    
	}else
	    cout<<"NO";
	

	return 0;
}
