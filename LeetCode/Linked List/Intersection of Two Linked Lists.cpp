#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class node{
    public:
    int data;
    node *next;
};

void printLL(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

void pushFront(node * &head, int new_data){
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void pushMiddle(node *prev_node,int new_data){
    if(prev_node==NULL){
        return;
    }
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}

void reverseLL(node * &head){
    node *cur=head;
    node *prev=NULL;
    node *temp;
    
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        
        prev=cur;
        cur=temp;
    }
    head=prev;
    return;
}

int findMiddle(node *head){
    node *slow=head;
    node *fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

node * merge(node *a, node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node *c;
    if(a->data<b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}

node * removenodefromBack(node *head, int n){
    node * start=new node;
    start->next=head;
    node *slow=start;
    node *fast=start;
    
    for(int i=1;i<=n;i++){
        fast=fast->next;
    }
    
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return start->next;
}

void deleteNode(node * n){
    n->data=n->next->data;
    n->next=n->next->next;
}

/*node * addNumber(node *l1, node *l2){
    node *dummy=new node;
    node *temp=dummy;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry){
        int sum=0;
        if(l1!=NULL){
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=carry;
        carry= sum/10;
        node *n =new node(sum%10);
        temp->next=n;
        temp=temp->next;
    }
    return dummy->next;
}*/

node * interSectionPoint(node * headA, node * headB){
    if(headA==NULL || headB==NULL){
        return NULL;
    }
    node *a= headA;
    node *b= headB;
    
    while(a!=b){
        a= a==NULL? headB:a->next;
        b= b==NULL? headA:b->next;
    }
    return a;
}

int main() {
    node *head=NULL;
    pushFront(head,4);
    pushFront(head,3);
    pushFront(head,2);
    pushFront(head,1);
    node *head2=NULL;
    pushFront(head2,9);
    pushFront(head2,8);
    pushFront(head2,7);
    pushFront(head2,6);
    printLL(head);
    cout<<endl;
    pushMiddle(head,9);
    printLL(head);
    cout<<endl;
    reverseLL(head);
    printLL(head);
    cout<<endl;
    cout<<findMiddle(head->next);
    cout<<endl;
    node *h=NULL;
    pushFront(h,4);
    pushFront(h,3);
    pushFront(h,2);
    pushFront(h,1);
    printLL(h);
    cout<<endl;
    deleteNode(h->next->next);
    printLL(h);
    //Call Func
	// your code goes here
	return 0;
}
 