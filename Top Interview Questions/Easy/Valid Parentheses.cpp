#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isBalanced(string s) {
    stack<char> ss;
	for(auto ch : s){

		switch(ch){
			case '(':
			case '[':
			case '{': ss.push(ch);
						break;

			case ')': if(!ss.empty() and ss.top()=='('){
						ss.pop();
					  }
					  else{
					  	return false;
					  }
					  break;

			case ']': if(!ss.empty() and ss.top()=='['){
						ss.pop();
					  }
					  else{
					  	return false;
					  }
					  break;

			case '}': if(!ss.empty() and ss.top()=='{'){
						ss.pop();
					  }
					  else{
					  	return false;
					  }
					  break;
			default : continue;	  
		}
	}

	if(ss.empty()==true){
		return true;
	}
	return false;
    }
int main() {
    string s;cin>>s;

	if(isBalanced(s)){
		cout<<"Balanced!"<<endl;
	}
	else{
		cout<<"Not Balanced "<<endl;

	}
	// your code goes here
	return 0;
}
