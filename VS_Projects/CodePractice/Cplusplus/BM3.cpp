//#include<iostream>
//#include<vector>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
// 
//class Solution {
//public:
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        if (k == 1) return head;//要是k=1 直接原数组不发生改变
//        ListNode* cur = head;//利用一个新指针去更新
//        vector<int> v;
//        int count = 0, index = 0;
//        while (cur) {
//            v.push_back(cur->val);
//            count++;
//            index++;
//            if (count == k) {
//                //当计数器是k表示链表需要翻转 利用reverse函数翻转
//                reverse(v.begin() + index - k, v.begin() + index);
//                //计数器清零
//                count = 0;
//            }
//            //指针后移
//            cur = cur->next;
//        }
//        cur = head;
//        //最后返回是指针 对指针值进行从新赋值
//        for (int i = 0; i < v.size(); i++) {
//            cur->val = v[i];
//            cur = cur->next;
//        }
//        return head;
//    }
//    ListNode* reverselist(ListNode* head) {
//        ListNode* prev = nullptr;
//        ListNode* curr = head;
//        ListNode* next = nullptr;
//
//        while (curr != nullptr) {
//            next = curr->next;// 保存当前节点的下一个节点
//            curr->next = prev;// 反转当前节点的指针指向前一个节点
//            prev = curr;        // 更新 prev 指向当前节点
//            curr = next;        // 更新 curr 指向下一个节点
//        }
//
//        return prev;
//    }
//};
//int main() {
//    int k;
//    cout << "input k:";
//    cin >> k;
//
// 
//    //cout << "input value:";
//    //int n = 0; // 元素个数
//    //int capacity = 1; // 初始容量
//    //int* arr = new int[capacity]; // 动态数组
//    //int x;
//    //while (cin >> x) {
//    //    if (n == capacity) { // 数组已满，需要扩容
//    //        capacity ++;
//    //        int* new_arr = new int[capacity];
//    //        for (int i = 0; i < n; ++i) {
//    //            new_arr[i] = arr[i];
//    //        }
//    //        delete[] arr;
//    //        int* arr = new int[capacity];
//    //        arr = new_arr;
//    //    }
//    //    arr[n++] = x; // 将输入的元素存入数组中
//    //}
//    //cout << "arr:" << *arr << endl;
//    //int size= sizeof(*arr) / sizeof(arr[0]);
//    //ListNode* head = nullptr;
//    //ListNode* tail = nullptr;
//    //for (int i = 1; i <= size; i++) {
//    //    ListNode* node = new ListNode(i);
//    //    if (head == nullptr) {
//    //        head = node;
//    //        tail = node;
//    //    }
//    //    else {
//    //        tail->next = node;
//    //        tail = node;
//    //    }
//    //}
//    int size = 7;
//    int a[] = { 1,2,3,4,5,6,7 };
//    int value;
//    ListNode* head = new ListNode(0);
//    ListNode* current = head;
//    for (int i = 1; i <= size; i++) {
//        value = a[i - 1];
//        current->val = value;
//        if (i != size) {
//            current->next = new ListNode(0);
//        }
//        current = current->next;
//    }
//    current = head;
//    while (current != nullptr) {
//        cout << current->val << " ";
//        current = current->next;
//    }
//
////    int value;
////    listnode* current = head;
////    for (int i = 1; i <= size; i++) {
////        value = a[i - 1];
////        current->val = value;
////        current = current->next;
////    }
//    cout << endl;
//    Solution s;
//    ListNode* reversedhead = s.reverseKGroup(head,k);
//
//    // 输出反转后的链表
//    cout << "reverseKGroup output:" << endl;
//    ListNode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//    cout << "output over:" << endl;
//    // 释放链表内存
//    p = reversedhead;
//    while (p != nullptr) {
//        ListNode* q = p;
//        p = p->next;
//        delete q;
//    }
//
//
//    return 0;
//}