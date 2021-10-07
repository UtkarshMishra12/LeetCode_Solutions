#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

string convertToBase7(int num) {
        string res="";
        bool neg=false;
        if(num==0)return "0";
        if(num<0){
            neg=true;
            num=-num;
        }
        while(num>0){
            int x=num%7;
            num/=7;
            res=to_string(x)+res;
        }
        if(neg)res="-"+res;
        return res;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 