#include <iostream>
#include <list>

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    std::cout<<"    printing something"<<std::endl;
    int sum = 0;
    int carry = 0;
    ListNode * tempListNode = new ListNode();

    while( NULL!= l1 || NULL != l2 || carry !=0 ){
        if(NULL != l1){
        sum = (l1->val+ l2->val) %10;
        }

        carry = (l1->val + l2->val)/10;
        tempListNode->val = sum;
        l1 = l1->next;
        l2 = l2->next; 
    }


    return 0;
}

int main(){

    ListNode * l1 = new ListNode(1);
    ListNode * l2 = new ListNode(2,l1);
    ListNode * l3 = new ListNode(3,l2);

    ListNode * l4 = new ListNode(5);
    ListNode * l5 = new ListNode(6,l4);
    ListNode * l6 = new ListNode(8,l5);
    ListNode * l7 = new ListNode(8,l6);
    ListNode * l8 = new ListNode(8,l7);
    
    //ListNode * extracted = l3->next;

    //std::cout<<"extracted val == "<< extracted->val<<std::endl;

    ListNode * l9 = addTwoNumbers(l3,l8);


    return 0;
}