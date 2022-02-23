#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector <int> nqe(n,-1);
        stack <int> st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n] )
                st.pop();
            
            if(i<n){
                if(!st.empty())
                    nqe[i]=st.top();
            }
            
            st.push(nums[i%n]);
        }
        return nqe;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 