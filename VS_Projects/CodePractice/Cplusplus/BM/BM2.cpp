//#include<iostream>
//using namespace std;
//
//struct listnode {
//    int val;
//    struct listnode* next;
//    listnode(int x) : val(x), next(nullptr) {}
//};
//class solution {
//public:
//    listnode* reversebetween(listnode* head, int m, int n) {
//        if (!head || m >= n) return head;
//        listnode dummy(0);
//        dummy.next = head;
//        listnode* pre = &dummy;
//        for (int i = 1; i < m; ++i) pre = pre->next;
//        listnode* cur = pre->next;
//        for (int i = m; i < n; ++i) {
//            listnode* t = cur->next;
//            cur->next = t->next;
//            t->next = pre->next;
//            pre->next = t;
//        }
//        return dummy.next;
//    }
//};
//
//int main() {
//    int m, n, size;
//    cout << "input m and n and size:";
//    cin >> m >> n >> size;
//    
//    listnode* head = nullptr;
//    listnode* tail = nullptr;
//    for (int i = 1; i <= size; i++) {
//        listnode* node = new listnode(i);
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
//    cout << "input value:";
//    int* a = new int[size];
//    for (int i = 1; i <= size; i++)
//    {
//        cin >> a[i - 1];
//    }
//    int value;
//    listnode* current = head;
//    for (int i = 1; i <= size; i++) {
//        value = a[i - 1];
//        current->val = value;
//        current = current->next;
//    }
//    delete[] a;
//
//    solution s;
//    listnode* reversedhead = s.reversebetween(head,m,n);
//
//    // 输出反转后的链表
//    cout << "reverse output:";
//    listnode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//
//    // 释放链表内存
//    p = reversedhead;
//    while (p != nullptr) {
//        listnode* q = p;
//        p = p->next;
//        delete q;
//    }
//
//
//    return 0;
//}