///week13-3.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr ) {
            int now = carry; ///Τ⊿Τ秈
            if(l1 != nullptr) { /// 狦临Τ
                now += l1->val; /// р秈
                l1 = l1->next; /// 传掸
            }
            if(l2 != nullptr) {
                now += l2->val; /// р秈
                l2 = l2->next; /// 传掸
            }
            ans2->next = new ListNode( now%10 ); /// 计非称node
            ans2 = ans2->next; /// 传掸
            carry = now / 10; /// 秈场だ
        }
        if(carry>0) ans2->next = new ListNode( carry ); /// 临Τ秈? 1
        return ans->next;
    }
};
