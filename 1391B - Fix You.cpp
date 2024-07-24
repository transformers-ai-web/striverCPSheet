#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    //cout<<t<<endl;
    while(t--){
        int n,m;
        cin>>n>>m;
        //cout<<n<<" "<<m<<endl;
        //string arr[n][m];
        vector<vector<char>>arr;
        vector<char>temp;
        char s;
        //cout<<n<<" "<<m<<endl;
        for(int i = 0; i<n; i++){
            for(int j =0;j<m;j++){
                cin>>s;
                temp.push_back(s);
            }
            arr.push_back(temp);
            temp.clear();
        }
        // for(int i = 0; i<n; i++){
        //     for(int j =0;j<m;j++){
        //         cout<<arr[i][j];
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        int cnt = 0;
        for(int i = 0; i < n;i++){
            if(arr[i][m-1] == 'R'){
                cnt++;
            }
            //cout<<arr[i][m-1]<<endl;
        }
        for(int i = 0;i < m;i++){
            if(arr[n-1][i] == 'D')
                cnt++;
        }
        //cout<<"3"<<endl;
        cout<<cnt<<"\n";
    }
    return 0;
}