#include<iostream>
using namespace std;

int main(){
	int n,i,key,f=0,c=0,pos;
	int arr[100];
    cout<< "Enter the number of elements:" << endl;
	cin >> n;
	
	cout << "Enter the elements: " << endl;;
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	
	cout << "Enter the Key element: " << endl;
	cin >> key ;
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			f=1;
			c++;
			pos=i+1;
			break;
		}
		else{
			c++;
		}
	}
	if(f==1){
		cout << "The Element " << key << " is Found in position " << pos << " and no of comparisons " << c << endl;
	}
	else{
		cout << "The Element " << key << " is not Found" << endl;
	}
	
	return 0;
}
