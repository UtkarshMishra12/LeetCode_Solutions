#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        dfs(root,maxi);
        return maxi;
    }
    
    int dfs(TreeNode * root, int &maxi){
        if(root==NULL) return 0;
        int lh=max(0,dfs(root->left,maxi));
        int rh=max(0,dfs(root->right,maxi));
        maxi=max(maxi,root->val+lh+rh);
        return root->val+max(lh,rh);
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 