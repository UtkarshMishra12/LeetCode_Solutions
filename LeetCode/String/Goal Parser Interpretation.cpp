#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 string interpret(string cmd) {
        string s="";
        for(int i=0;i<cmd.length();i++){
            if( cmd[i] == '(' && cmd[i+1] == ')' ){
                s+='o';
                i++;
            }
        else if( cmd[i] == '(' && cmd[i+1] == 'a' && cmd[i+2] == 'l' && cmd[i+3] == ')'){
                s+="al";
                i+=3;
            }
            else
                s+=cmd[i];
        }
        return s;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 