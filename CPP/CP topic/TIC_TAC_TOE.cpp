#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int arr[5];
        for(int i=0;i<5;i++){
            cin >> arr[i];
        }
        int dr=0,ra=0,ri=0;
        for(int i=0;i<5;i++){
            if(arr[i]==0){
                dr++;
            }
            else if(arr[i]==1){
                ra++;
            }
            else{
                ri++;
            }
        }
        if(dr==5 || ra==ri) cout << "DRAW" << endl;
        else if(ra>ri) cout << "RAHUL" << endl;
        else cout << "RIA" << endl;
    }
	return 0;
}
