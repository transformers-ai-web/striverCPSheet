#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, temp, totalSteps = 0;
	cin>>n;
	vector<int> soldierOrder, copySoldierOrder;
	for(int i = 0; i<n; i++){
	    cin>>temp;
	    soldierOrder.emplace_back(temp);
	}
	copySoldierOrder.insert(copySoldierOrder.begin(), soldierOrder.begin(), soldierOrder.end());
	
	sort(copySoldierOrder.begin(), copySoldierOrder.end());
	//cout<<copySoldierOrder[0]<<" "<<copySoldierOrder[n-1];
	int maxHeight = copySoldierOrder[n-1];
	int minHeight = copySoldierOrder[0];
	int minLastOccurence, maxFirstOccurence;
	for(int i =0; i<n ; i++){
	    if(soldierOrder[i] == minHeight){
	        minLastOccurence = i;
	    }
	}
	for(int i = 0; i<n ; i++){
	    if(soldierOrder[i] == maxHeight){
	        maxFirstOccurence = i;
	        break;
	    }
	}
	if(maxFirstOccurence < minLastOccurence)
	    cout<< maxFirstOccurence + n - minLastOccurence - 1;//<<" "<<"hello";
	else
	    cout<<maxFirstOccurence + n - minLastOccurence - 2;//<<" "<<"hey"<<maxFirstOccurence<<" "<<minLastOccurence;
    return 0;
}
