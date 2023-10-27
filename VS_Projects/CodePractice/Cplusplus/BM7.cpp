#include<iostream>
using namespace std;
struct ListNode {
    int val;
    struct ListNode* next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead) {
        int x;
        
        auto cur = pHead;
        while (cin >> x)
        {
            cur->val = x;
            cur->next=new ListNode(0);
            cur = cur->next;
        }
        auto ringstart = cur;
        int ring_num;
        auto prev = cur;
        while (cin >> ring_num)
        {
            cur->val = ring_num;
            //prev = cur;
            cur->next = new ListNode(0);
            cur = cur->next;
        }
        cur->next = ringstart;
        return pHead;

    }
};
int main() {
    Solution s;
    ListNode* my = new ListNode(0);
    s.EntryNodeOfLoop(my);
    return 0;
}