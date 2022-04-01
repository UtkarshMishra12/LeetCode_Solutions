#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class node{
    public:
    int val;
    node*left;
    node *right;
    node(int val_){
        val=val_;
        left=right=NULL;
    }
};

vector<vector<int>> zigzagTraversal(node *root){
    vector<vector<int>> ans;
    if(root==NULL)return ans;
    queue<node*>q;
    q.push(root);
    bool leftToright=true;
    
    while(!q.empty()){
        int size=q.size();
        vector<int> level(size);
        for(int i=0;i<size;i++){
            node*n=q.front();
            q.pop();
            int index=(leftToright)?i:(size-1-i);
            level[index]=n->val;
            
            if(n->left)q.push(n->left);
            if(n->right)q.push(n->right);
            
        }
        leftToright=!leftToright;
        ans.push_back(level);
    }
    return ans;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 