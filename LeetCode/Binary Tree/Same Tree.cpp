#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return (p==q);
        if(p->val != q->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 