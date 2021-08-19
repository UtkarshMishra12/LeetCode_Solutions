#include <bits/stdc++.h>
using namespace std;
#define ll long long int

stack <char> ss;   
    for(auto c:s){
        if(c=='(' || c=='{' || c=='['){
            ss.push(c);
        }
        else{
            if(ss.empty()) return false;
            //Top
            char top=ss.top();
            if(c==')' && top!='(') return false;
            else if(c=='}' && top!='{') return false;
            else if(c==']' && top!='[') return false;
            else ss.pop();
        }
    }
    return ss.empty();
  }

int main() {
	// your code goes here
	return 0;
}
