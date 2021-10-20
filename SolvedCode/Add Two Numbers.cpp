class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int carry=0;
        ListNode* res=new ListNode(0);
        ListNode* head = res;
        while (l1 && l2){
            res->next=new ListNode((l1->val+l2->val+carry)%10);
            carry = (l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
            res=res->next;
        }
        
        while (l1){
            res->next=new ListNode((l1->val+carry)%10);
            carry = (l1->val+carry)/10;
            l1=l1->next;
            res=res->next;
        }
        
        while (l2){
            res->next=new ListNode((l2->val+carry)%10);
            carry = (l2->val+carry)/10;
            l2=l2->next;
            res=res->next;
        }
        
        if (carry>0){
            res->next = new ListNode(carry);
        }
        
        return head->next;
        
    }
};
