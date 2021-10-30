#include<iostream>
using namespace std;

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);	
	} 
}

int main(){
	int n,s;
	cout << "Enter a number: "; 
	cin >> n;
	s=fact(n);	
	cout << "The factorial of the number is " << s << endl;
  return 0;
}
