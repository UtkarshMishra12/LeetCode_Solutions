#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string largestOddNumber(string num) {
    // just find the position of the first odd digit from the end of the string . That will be the final digit of the number. return substring from 0 to that position 
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
