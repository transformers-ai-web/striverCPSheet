#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n, temp, cnt=0;
	cin>>n;
	while(n>0){
	    temp = n%10;
	    n = n/10;
	    if(temp == 4 || temp == 7)
	        cnt++;
	}
	if(cnt==4 || cnt==7)
	    cout<<"YES";
	else
	    cout<<"NO";
    return 0;
}
