#include<iostream>
#include<stack>
using namespace std;

bool isValidParaenthesis(string s){
	int n=s.size();
	stack<char> st;
	bool ans=true;
	int i;
	for(i=0;i<n;i++){
		if(s[i]=='('|| s[i] == '[' || s[i] == '{'){
			st.push(s[i]);
		}	
		else if(s[i]==')' ){
			if(!st.empty() && st.top()=='('){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
		else if(s[i]=='}' ){
			if(!st.empty() && st.top()=='{'){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
		else if(s[i]==']' ){
			if(!st.empty() && st.top()=='['){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
	}
	if(!st.empty()){
		return false;
	}
	else{
		return ans;
	}
}

int main(){
	string s;
	cout<< "Enter the String: "<< endl;
	cin >> s;
	if(isValidParaenthesis(s)){
		cout << "Valid String" << endl;
	}
	else{
		cout << "Invalid String" << endl;
	}
	return 0;
	
}
