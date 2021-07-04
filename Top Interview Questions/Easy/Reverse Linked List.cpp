#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ListNode* reverseList(ListNode* head) {
    ListNode * prev=NULL;
    ListNode * current=head;
    ListNode * temp;
    while(current!=NULL){
        temp=current->next;
        current->next=prev;
            
        prev=current;
        current=temp;
    }
    head=prev;
    return head;
}
int main() {
    //Call Function after making Linked List
	// your code goes here
	return 0;
}
