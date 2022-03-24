#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int myAtoi(string s) {
        int n=s.size();
        if(s.empty()){
            return 0;
        }
        int sign=1,i=0;
        while(s[i]==' ' && i<n){
            i++;
        }
        
        if(i==n) return 0;
        
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        
        long int out=0;
        
        while(s[i] >= '0' && s[i] <= '9'){
            out*=10;
            if(out>=INT_MAX || out<=INT_MIN) break;
            out=out+s[i]-'0';
            i++;
            
        }
        
        if(sign==-1){
            out = -1*out;
        }
        if(out<=INT_MIN){
            return INT_MIN;
        }
        if(out>=INT_MAX) return INT_MAX;
        return (int)out;
    }

int main() {
    string s="-231";
    cout<<atoi(s);
    //Call Func
	// your code goes here
	return 0;
}
 