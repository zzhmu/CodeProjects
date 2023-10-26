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
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param head ListNode类
//     * @param k int整型
//     * @return ListNode类
//     */
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        // write code here
//    }
//};
//int main() {
//    int k, size;
//    cout << "input k:";
//    cin >> k;
//
//    ListNode* head = nullptr;
//    ListNode* tail = nullptr;
// 
//    cout << "input value:";
//    int* a = new int;
//    int n = 0; // 元素个数
//    int capacity = 10; // 初始容量
//    int* arr = new int[capacity]; // 动态数组
//
//    int x;
//    while (cin >> x) {
//        if (n == capacity) { // 数组已满，需要扩容
//            capacity *= 2;
//            int* new_arr = new int[capacity];
//            for (int i = 0; i < n; ++i) {
//                new_arr[i] = arr[i];
//            }
//            delete[] arr;
//            arr = new_arr;
//        }
//        arr[n++] = x; // 将输入的元素存入数组中
//    }
//    for (int i = 1; i <= size; i++)
//    {   
//        cin >> a[i - 1];
//    }
//    for (int i = 1; i <= size; i++) {
//        ListNode* node = new ListNode(i);
//        if (head == nullptr) {
//            head = node;
//            tail = node;
//        }
//        else {
//            tail->next = node;
//            tail = node;
//
//        }
//    }
//    int value;
//    ListNode* current = head;
//    for (int i = 1; i <= size; i++) {
//        value = a[i - 1];
//        current->val = value;
//        current = current->next;
//    }
//    delete[] a;
//
//    Solution s;
//    ListNode* reversedhead = s.reverseKGroup(head, k);
//
//    // 输出反转后的链表
//    cout << "reverseKGroup output:";
//    ListNode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//
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