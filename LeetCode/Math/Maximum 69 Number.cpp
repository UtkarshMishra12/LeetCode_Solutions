#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maximum69Number (int num) {
        string s= to_string(num);
        for(auto &i: s){
            if(i=='6'){
                i='9';
                break;
            }
        }
    return stoi(s);
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
