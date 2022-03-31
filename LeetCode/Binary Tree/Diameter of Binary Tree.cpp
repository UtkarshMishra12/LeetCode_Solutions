#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        dfs(root,dia);
        return dia;
    }
    
    int dfs(TreeNode *root,int & dia){
        if(root==NULL) return 0;
        
        int lh=dfs(root->left,dia);
        int rh=dfs(root->right,dia);
        dia=max(dia,lh+rh);
        return 1+max(lh,rh);
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 