//#include<iostream>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
//
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param head ListNode��
//     * @param n int����
//     * @return ListNode��
//     */
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        // write code here
//        
//        ListNode* cur = head;
//        ListNode* bef = new ListNode(0);
//        bef->next = head;
//        ListNode* lastn = bef;
//        while (cur->next!=nullptr) {
//            cur = cur->next;
//            if (n) {
//                n--;
//            }
//            if (!n) {
//                lastn = lastn->next;
//            }
//            
//
//        }
//        if (lastn == bef) {
//            head = head->next;
//            cout << "B";
//        }
//        else {
//            lastn->next = lastn->next->next;
//            cout << "A";
//        }
//        return head;
//    }
//};
//int main() {
//
//    ListNode* L=new ListNode(1);
//    L->next = new ListNode(2);
//    L->next->next = new ListNode(3);
//    L->next->next->next = new ListNode(4);
//    cout << L->val<<" ";
//    cout << L->next->val << " ";
//    cout << L->next->next->val << " ";
//    cout << L->next->next->next->val << endl;
//    int n = 4;
//    Solution s;
//    ListNode* D = s.removeNthFromEnd(L, n);
//
//    cout << D->val<< D->next->val<< D->next->next->val;
//    return 0;
//}