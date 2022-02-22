#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


class MyStack {
public:
    
    queue<int> que;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        que.push(x);
		for(int i=0;i<que.size()-1;++i){
			que.push(que.front());
			que.pop();
		}
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = que.front(); 
        que.pop(); 
        return x; 
    }
    
    /** Get the top element. */
    int top() {
        return que.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.size() == 0; 
    }
};


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 