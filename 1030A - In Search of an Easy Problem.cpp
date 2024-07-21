#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, flag=0;
    cin>>n;
    int temp;
    for(int i = 0; i<n; i++){
        cin>>temp;
        if(temp==1){
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"EASY";
    else
        cout<<"HARD";
}
