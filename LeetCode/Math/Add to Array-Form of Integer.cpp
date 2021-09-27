#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 vector<int> addToArrayForm(vector<int>& num, int k) {
        /*long long int a=0;
        for(auto i:num){
            a=a*10+i;
        }
        long long int n=a+k;
        vector<int> v;
        while(n!=0){
            long long int a=n%10;
            v.push_back(a);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        return v;*/
        int i = num.size()-1; 
        while(k>0 and i>=0){
           num[i] += k;
           k=num[i]/10;
           num[i]%=10;
           i--;
        }
        while(k>0){
            num.insert(num.begin(),k%10);
            k/=10;
        }
        
        return num;
    }


int main() {
    //Call Func
	// your code goes here
	return 0;
}
 