//#include<vector>
//#include<iostream>
//#include<deque>
//using namespace std;
//class Solution {
//public:
//    vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
//        vector<int> ans;
//        deque<int> dq;     // ˫�˶���, �������±�
//        int n = num.size();
//
//        for (int i = 0; i < n; i++) {
//            while (!dq.empty() && num[i] > num[dq.back()]) {    // �ų�����Ԫ�أ�
//                dq.pop_back();
//            }
//            dq.push_back(i);    // ������Ԫ�ص��±���ӡ�ÿ���±궼Ҫ��һ�ζ�
//            if (i - dq.front() + 1 > size) dq.pop_front();    // ����ͷԪ�ز��Ϸ��͵����������ʱ���±����ͷ�����±�+size+-1��˵�������������ڵĴ�С��
//            if (i >= size - 1) ans.push_back(num[dq.front()]);    // ���������ֵ����������,���±����size-1ʱ��ʼÿ�ζ�Ҫ�������ֵ
//        }
//
//        return ans;
//    }
//};