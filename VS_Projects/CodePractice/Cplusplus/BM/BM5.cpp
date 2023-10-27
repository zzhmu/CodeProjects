//#include<iostream>
//#include<vector>
//#include<set>
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
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param lists ListNode类vector
//     * @return ListNode类
//     */
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        ListNode* node = new ListNode(0);
//        ListNode* head = node;
//        ListNode* temp = new ListNode(0);
//        set<int> st;
//        int len = lists.size();
//        for (int i = 0; i < len; i++) {
//            temp = lists[i];
//            while (temp)
//            {
//                st.insert(temp->val);
//                temp = temp->next;
//            }
//        }
//        for (auto it = st.begin(); it != st.end(); ++it) {
//            node->val = *it;
//            node->next=new ListNode(0);
//            node = node->next;
//        }
//        
//        node = nullptr;
//        return head->next;
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
//    cin.clear();
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    cout << "input third listnode:";
//    ListNode* head3 = new ListNode(0);
//    ListNode* arr3 = head3;
//    while (cin >> x) {
//        arr3->val = x;
//        arr3->next = new ListNode(0);
//        arr3 = arr3->next;
//    }
//    cout << endl;
//    vector<ListNode*> vt;
//    vt.push_back(head1);
//    vt.push_back(head2);
//    vt.push_back(head3);
//    Solution s;
//    ListNode* mergedlist = s.mergeKLists(vt);
//    while (mergedlist!=nullptr)
//    {
//        cout << mergedlist->val << " ";
//        mergedlist = mergedlist->next;
//    }
//    return 0;
//}