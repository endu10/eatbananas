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
    ListNode * dummy = new ListNode();
    ListNode * temp = dummy;

    int carry = 0;
    while (NULL != l1 || NULL != l2 || 0 != carry ){
        int sum = 0;
        if(NULL != l1){
            sum += l1->val;
            l1 = l1->next;
        }
        if(NULL != l2){
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum /10;
        ListNode *loopTemp = new ListNode(sum %10);
        temp->next = loopTemp;
        temp = temp->next;

    }

    return dummy->next;
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

    //for()

    return 0;
}