#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 void helper(TreeNode *root,int k,vector<int>&ans){
        if(root==NULL){
            return;
        }
        helper(root->left,k,ans);
        ans.push_back(root->val);
        helper(root->right,k,ans);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        helper(root,k,ans);
        return ans[k-1];
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 