#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class MinStack {
    stack<long long> st; 
    long long mini; 
public:
    /** initialize your data structure here. */
    MinStack() {
        while(st.empty() == false) st.pop(); 
        mini = INT_MAX; 
    }
    
    void push(int value) {
        long long val = value; 
        if(st.empty()) {
            mini = val; 
            st.push(val); 
        }
        else {
            if(val < mini) {
                st.push(2 * val * 1LL - mini);
                mini = val; 
            }
            else {
                st.push(val); 
            }
        }
    }
    
    void pop() {
        if(st.empty()) return; 
        long long el = st.top(); 
        st.pop(); 
        
        if(el < mini) {
            mini = 2 * mini - el; 
        }
    }
    
    int top() {
        if(st.empty()) return -1; 
        
        long long el = st.top(); 
        if(el < mini) return mini; 
        return el; 
    }
    
    int getMin() {
        return mini; 
    }
};

/**

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 