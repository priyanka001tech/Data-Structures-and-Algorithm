#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
	stack<int> st; 
	int i;
	for(i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			st.push(s[i]-'0');
		}
		else{
			int op2=st.top();
			st.pop();
			int op1=st.top();
			st.pop();
			
			switch(s[i]){
				case '+':
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
					break;
				case '*':
					st.push(op1*op2);
					break;
				case '/':
					st.push(op1/op2);
					break;
				case '^':
					st.push(pow(op1,op2));
					break;				
			}
		}
	}
	if(!st.empty()){
		return st.top();
	}
	else{
		return -1;
	}
}
int main(){
	string s;
	cout << "Enter the String: "<<endl;
	cin>>s;
	cout <<postfixEvaluation(s)<<endl;
	return 0;
}
