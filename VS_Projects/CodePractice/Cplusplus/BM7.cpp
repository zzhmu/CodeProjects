//#include<iostream>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) :
//        val(x), next(NULL) {
//    }
//};
//
//class Solution {
//public:
//    ListNode* EntryNodeOfLoop(ListNode* pHead) {
//        int x;
//        
//        auto cur = pHead;
//        cout << "input list:";
//        while (cin >> x)
//        {
//            cur->next = new ListNode(0);
//            cur = cur->next;
//            cur->val = x;
//
//        }
//        auto ringstart = cur;
//        int ring_num;
//        auto prev = cur;
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "input ring:";
//        while (cin >> ring_num)
//        {
//            cur->next = new ListNode(0);
//            cur = cur->next;
//            cur->val = ring_num;
//            //prev = cur;
//       
//        }
//        cur->next = ringstart;
//        if ((ringstart->next)->val==NULL) {
//            cout << "null";
//            return NULL;
//        }
//        else {
//            return ringstart;
//        }
//        
//
//    }
//};
//int main() {
//    Solution s;
//    ListNode* my = new ListNode(0);
//    //s.EntryNodeOfLoop(my);
//    cout << s.EntryNodeOfLoop(my)->val;
//    return 0;
//}