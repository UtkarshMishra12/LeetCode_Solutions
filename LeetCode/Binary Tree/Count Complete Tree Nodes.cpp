 #include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

  int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=findL(root);
        int rh=findR(root);
        if(lh==rh) return (1<<lh)-1;
        return 1 + countNodes(root->left) +countNodes(root->right);
    }
    
    int findL(TreeNode *node){
        int h=0;
        while(node){
            h++;
            node=node->left;
        }
        return h;
    }
    int findR(TreeNode *node){
        int h=0;
        while(node){
            h++;
            node=node->right;
        }
        return h;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 