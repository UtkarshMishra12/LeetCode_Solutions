#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        if(root->val==sum && root->left==NULL && root->right==NULL)return true;
        return hasPathSum(root->left,sum-root->val) || hasPathSum(root->right,sum-root->val);

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 