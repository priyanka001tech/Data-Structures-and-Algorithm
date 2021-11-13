#include <bits/stdc++.h>
using namespace std;

bool isFeas(int mid,int arr[],int n,int k){
    int pos=arr[0],ele=1;
    
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=mid){
            pos=arr[i];
            ele++;
            if(ele==k){
                return true;
            }
        }
    }
    return false;
}
int largestMinDis(int arr[],int n,int k){
    sort(arr,arr+n);
    int res=-1;
    int l=1,r=arr[n-1];
    
    while(l<r){
        int mid=(l+r)/2;
        if(isFeas(mid,arr,n,k)){
            res=max(res,mid);
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    return res;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x=largestMinDis(arr,n,k);
	    cout << x << endl;
	}
	return 0;
}
