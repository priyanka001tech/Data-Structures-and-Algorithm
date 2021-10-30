#include<iostream>
using namespace std;

int sumdig(int n){
	if(n == 0){
		return 0;
	} 
	else{
		return ((n % 10) + sumdig(n / 10));
	}   
}

int main(){
	int n,s;
	cout << "Enter the number: ";
	cin >> n;
	s=sumdig(n);
	cout << "The sum of digit " << s;
	return 0;
}
