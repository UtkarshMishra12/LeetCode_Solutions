#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
    ll data;
    Node * left;
    Node * right;
    Node(int d){
        d=data;
        left=NULL;
        right=NULL;
    }
};
Node * BuildTree(){
    int d;cin>>d;
    
    if(d==-1){
        return NULL;
    }
    
    Node *n= new Node(d);
    n->left= BuildTree();
    n->right= BuildTree();
    return n;
}
int maxDepth(Node* root) {
    if(root==NULL){
       return 0;
    } 
    int h1= maxDepth(root->left);
    int h2= maxDepth(root->right);
    return 1+max(h1,h2);
}
int main() {
    Node * root= BuildTree();
    cout<<maxDepth(root);
	// your code goes here
	return 0;
}
