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
    node *left;
    node *right;
    node(int val_){
        val=val_;
        left=right=NULL;
    }
};

  TreeNode* searchBST(TreeNode* root, int val) {
        while(root!=NULL && root->val!=val){
            if(val<root->val) root=root->left;
            else root=root->right;
        }
        return root;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 