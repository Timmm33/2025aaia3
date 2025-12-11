///week14-3.cpp
class Solution {
public:
    ListNode* myReverse(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* ans = myReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1); /// 反過來
        ListNode* list2 = myReverse(l2); /// 反過來

        ListNode* ans = myAddTwoNumbers(list1, list2);
        return myReverse(ans); /// 反過來
    }
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* ans =new ListNode(999); /// 隨便的勾勾 答案會放在勾勾的右邊
        ListNode* ans2 = ans; /// 負責幫 ans 收尾
        int carry = 0; /// 進位
        while(list1 != nullptr || list2 != nullptr) {
            int now = carry; /// 現在要處理的位數
            if(list1 != nullptr) {
                now += list1->val; /// 加入值
                list1 = list1->next; /// 換下一筆、待命
            }
            if(list2 != nullptr) {
                now += list2->val; /// 加入值
                list2 = list2->next;  /// 換下一筆、待命
            }
            ans2->next = new ListNode( now%10 );
            carry = now / 10;
            ans2 = ans2->next;
        }
        if(carry>0) ans2->next = new ListNode(carry); /// 處理進位
        return ans->next;
    }
};
