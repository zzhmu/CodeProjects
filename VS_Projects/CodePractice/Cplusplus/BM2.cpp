#include<iostream>
using namespace std;

struct listnode {
    int val;
    struct listnode* next;
    listnode(int x) : val(x), next(nullptr) {}
};
 
class solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param head listnode��
     * @param m int����
     * @param n int����
     * @return listnode��
     */
    listnode* reversebetween(listnode* head, int m, int n) {
        // write code here
        listnode* prev = nullptr;  // ��ת�������ͷ���
        listnode* curr = head;     // ��ǰ�ڵ㣬��ʼΪͷ���
        for (int i = 1; i < n; i++) {
            curr = head->next;
        }
        listnode* next = nullptr;  // ��ǰ�ڵ����һ���ڵ�

        while (m<=n) {
            next = curr->next;    // ���浱ǰ�ڵ����һ���ڵ�
            curr->next = prev;    // ��ת��ǰ�ڵ��ָ��ָ��ǰһ���ڵ�
            prev = curr;          // ���� prev ָ��ǰ�ڵ�
            curr = next;          // ���� curr ָ����һ���ڵ�
            m++;
        }

        return prev;  // ���ط�ת�������ͷ���
    }
};
int main() {
    int m, n, size;
    cout << "input m and n and size:";
    cin >> m >> n >> size;
    
    listnode* head = nullptr;
    listnode* tail = nullptr;
    for (int i = 1; i <= size; i++) {
        listnode* node = new listnode(i);
        if (head == nullptr) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;

        }
    }
    int* a = new int[size];
    cout << "input value:";
    int* a = new int[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> a[i - 1];
    }
    int value;
    listnode* current = head;
    for (int i = 1; i <= size; i++) {
        value = a[i - 1];
        current->val = value;
        current = current->next;
    }
    delete[] a;

    solution s;
    listnode* reversedhead = s.reversebetween(head,m,n);

    // �����ת�������
    cout << "reverse output:";
    listnode* p = reversedhead;
    while (p != nullptr) {
        cout << p->val << " ";
        p = p->next;
    }

    // �ͷ������ڴ�
    p = reversedhead;
    while (p != nullptr) {
        listnode* q = p;
        p = p->next;
        delete q;
    }


    return 0;
}