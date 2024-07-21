#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, flag=1;
    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        for(int j=0;j<m;j++){
            if(i%2 == 0){
                //flag++;
                if(flag%2==0 && j==0){
                    cout<<"#";
                    //cout<<flag<<" "<<j<<endl;
                    //flag++;
                }
                else if(flag%2!=0 && j==m-1){
                    cout<<"#";
                    //flag++;
                }
                else{
                    cout<<".";
                }
                if(j==m-1){
                    flag++;
                }
            }
            else{
                cout<<"#";
            }
        }
        cout<<"\n";
        //flag++;
    }
    return 0;
}