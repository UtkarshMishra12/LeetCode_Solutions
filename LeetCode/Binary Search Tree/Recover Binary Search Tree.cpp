#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

TreeNode *prev=NULL,*first=NULL,*second=NULL;
    
    void recover(TreeNode* root){
        if(root==NULL){
            return;
        }
        recover(root->left);
        if(prev!=NULL && root->val < prev->val){
            if(first==NULL){
                first=prev;
            }
            second=root;
        }
        prev=root;
        recover(root->right);  
    }
    
    void recoverTree(TreeNode* root) {
        recover(root);  
        swap(first->val,second->val);
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 