#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void  generateBrackets(vector <string>& ans,string output, int n, int o,int c){
        if(o==n && c==n){
            ans.push_back(output);
            return;
        }
        if(o<n){
            generateBrackets(ans,output+"(", n, o+1, c);
        }
        
        if(c<o){
            generateBrackets(ans,output+")", n, o, c+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generateBrackets(ans,"",n,0,0);
        return ans;
    }
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
