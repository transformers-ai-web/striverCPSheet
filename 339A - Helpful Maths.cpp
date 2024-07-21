#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string str;
    cin>>str;
    vector<char> sortedArr;
    for(int i = 0; i < str.size();i+=2){
        //cout<<str[i];
        sortedArr.push_back(str[i]);
    }
    // cout<<endl;
    // for(auto it : sortedArr){
    //     cout<<it;
    // }
    // cout<<endl;
    
    int n = sortedArr.size();
    sort(sortedArr.begin(), sortedArr.end());
    
    // for(auto it : sortedArr){
    //     cout<<(it);
    // }
    int j = 0;
    for(int i = 0;i<str.size();i++){
        if(i%2!=0)
            cout<<"+";
        else
            { cout<<sortedArr[j];
             j++;
            }
    }
}

