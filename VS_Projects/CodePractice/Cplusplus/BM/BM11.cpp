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
//     * @param head1 ListNode��
//     * @param head2 ListNode��
//     * @return ListNode��
//     */
//    ListNode* addInList(ListNode* head1, ListNode* head2) {
//        
//        int a=0, b=0,c;
//        while (head1!=nullptr)
//        {
//            a = a*10 + head1->val;
//            head1 = head1->next;
//        }
//        while (head2 != nullptr)
//        {
//            b = b * 10 + head2->val;
//            head2 = head2->next;
//        }
//        c = a + b;
//        //cout << c;
//        ListNode* last_node = new ListNode(0);
//        while (c)
//        {
//            last_node->val = c % 10;
//            c /= 10;
//            ListNode* node = new ListNode(0);
//            node->next = last_node;
//            last_node = node;
//            
//        }
//        return last_node->next;
//
//        //ListNode* last_node = nullptr;  // �޸Ĵ���
//        //while (c) {
//        //    ListNode* node = new ListNode(c % 10);
//        //    node->next = last_node;
//        //    last_node = node;
//        //    c /= 10;
//        //}
//        //return last_node;
//    }
//};
//int main() {
//    Solution s;
//    ListNode* L1 = new ListNode(9);
//    L1->next=new ListNode(3);
//    L1->next->next = new ListNode(8);
//    ListNode* L2 = new ListNode(6);
//    L2->next = new ListNode(3);
//    ListNode* res = s.addInList(L1, L2);
//    cout << res->val << res->next->val << res->next->next->val << res->next->next->next->val;
//    return 0;
//}