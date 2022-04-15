#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL) return root;
        if(root->val > high) return trimBST(root->left,low,high);
        if(root->val<low) return trimBST(root->right,low,high);
        
        root->left=trimBST(root->left,low,high);
        root->right=trimBST(root->right,low,high);
        return root;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 