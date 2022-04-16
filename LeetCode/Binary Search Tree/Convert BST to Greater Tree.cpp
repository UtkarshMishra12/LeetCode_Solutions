#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

    int curr_sum;
    void traverse(TreeNode* node){
        // Go right
        if(node->right) traverse(node->right);
        
        // Process node, add curr value to the right most node recursively
        curr_sum+=node->val;
        node->val=curr_sum;
        
        // Go left
        if(node->left) traverse(node->left);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        // if root is null return root
        if(!root) return root;
        
        // curr will store the sum of node-values higher than current node
        curr_sum=0;
        traverse(root);
        return root;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 