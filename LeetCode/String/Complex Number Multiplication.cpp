#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

  string complexNumberMultiply(string num1, string num2) {
        int a,b,c,d;
        int it1=num1.find('+');
        a=stoi(num1.substr(0,it1));
        b=stoi(num1.substr(it1+1,num1.size()-2));
        int it2=num2.find('+');
        c=stoi(num2.substr(0,it2));
        d=stoi(num2.substr(it2+1,num2.size()-2));
        
        return to_string(a*c-b*d)+'+'+to_string(a*d+c*b)+'i';
    }
int main() {
   
	// your code goes here
	return 0;
}
 