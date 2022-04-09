#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

  void helper(TreeNode *root,set<int> &s){
        if(root==NULL) return ;
        helper(root->left,s);
        s.insert(root->val);
        helper(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        helper(root,s);
        int n=s.size();
        if(n==1) return -1;
        auto it=s.begin();
        it++;
        return *it;
        
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 