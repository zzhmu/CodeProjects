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
//     *
//     * @param l1 ListNode��
//     * @param l2 ListNode��
//     * @return ListNode��
//     */
//    ListNode* Merge(ListNode* l1, ListNode* l2) {
//        // write code here
//        ListNode* t = new ListNode(0);  //����ͷ�ڵ�
//        ListNode* p = t;
//        while (l1 && l2) {
//            if (l1->val > l2->val) { p->next = l2; l2 = l2->next; }
//            else { p->next = l1; l1 = l1->next; }
//            p = p->next;
//        }
//        //l1Ϊ�� ֱ���ں���ƴ��l2
//        if (!l1) p->next = l2;
//        else p->next = l1;
//        return t->next;
//    }
//};
//int main() {
//    int x;
//    cout << "input first listnode:" ;
//    ListNode* head1=new ListNode(0);
//    ListNode* arr1 = head1;
//    while (cin >> x) {
//        arr1->val = x;
//        arr1->next = new ListNode(0);
//        arr1 = arr1->next;
//    }
//    cout<<endl;
//    cin.clear();
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    cout << "input second listnode:";
//    ListNode* head2 = new ListNode(0);
//    ListNode* arr2 = head2;
//    while (cin >> x) {
//        arr2->val = x;
//        arr2->next = new ListNode(0);
//        arr2 = arr2->next;
//    }
//    cout << endl;
//    Solution s;
//    ListNode* mergedlist = s.Merge(head1, head2);
//    while (mergedlist!=nullptr)
//    {
//        cout << mergedlist->val << " ";
//        mergedlist = mergedlist->next;
//    }
//    return 0;
//}