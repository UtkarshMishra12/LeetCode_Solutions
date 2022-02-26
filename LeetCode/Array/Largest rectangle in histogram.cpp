#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int largestRectangleArea(vector<int>& heights) {
        stack<int> st; 
        int maxA = 0; 
        int n = heights.size(); 
        for(int i = 0;i<=n;i++) {
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop(); 
                int width; 
                if(st.empty()) width = i; 
                else width = i - st.top() - 1; 
                
                // cout << i << " " << width << " " << height << endl; 
                maxA = max(maxA, width * height); 
            }
            st.push(i); 
        }
        return maxA;
    }


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 