#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool squareIsWhite(string s) {
        if( (s[0]== 'a' || s[0]== 'c' || s[0]== 'e' || s[0]=='g') ){
            if(s[1]== '2' || s[1]=='4' || s[1]=='6' || s[1]=='8'){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if( (s[0]== 'b' || s[0]=='d' || s[0]=='f' || s[0]=='h') ){
                if(s[1]== '2' || s[1]=='4' || s[1]=='6' || s[1]=='8'){
                    return false;
                }
                else{
                    return true;
                }
            }
        }
    return {};
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
