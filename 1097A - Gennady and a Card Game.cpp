#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string tableCard;
    string arr[5];
    cin>>tableCard;
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    int flag = 0;
    for(int i = 0; i<5;i++){
        //cout<<arr[i][1];
        if(arr[i][1] == tableCard[1]){
            cout<<"YES";
            flag++;
            break;
        }
        else if(arr[i][0] == tableCard[0]){
            cout<<"YES";
            flag++;
            break;
        }
    }
    if(flag==0){
        cout<<"NO";
    }
}
