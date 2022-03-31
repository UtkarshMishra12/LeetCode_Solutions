#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


bool isBalancedBT(node * root){
    return maxDepth(root)!=-1;
}
int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        
        int lh=maxDepth(root->left);
        if(lh==-1) return -1;
        int rh=maxDepth(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        
        return 1+max(lh,rh);
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 