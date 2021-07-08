#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 ListNode* middleNode(ListNode* head) {
    ListNode *slow= head;
    ListNode *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
