//#include<vector>
//#include<queue>
//using namespace std;
//class Solution {
//public:
//    priority_queue<int> max_heap;    // �󶥶�
//    priority_queue<int, vector<int>, greater<int>> min_heap;    // С����
//
//    void Insert(int num) {
//        if (max_heap.empty() || max_heap.top() > num) max_heap.push(num);    // �󶥶�Ϊ�ջ�󶥶ѶѶ����ڲ���Ԫ��
//        else min_heap.push(num);    // �������С����
//
//        // size()�����õ�������size_type���޷��ŵ�, �мǲ�Ҫֱ�ӷ����ж������, Ҫ��ת��int��
//        int a = max_heap.size(), b = min_heap.size();
//
//        if (a - b > 1) {    // �󶥶�Ԫ���������࣬��֤�󶥶Ѵ�С-С���Ѵ�С���ڵ���1
//            int p = max_heap.top(); max_heap.pop();
//            min_heap.push(p);
//        }
//        else if (b > a) {    // С����Ԫ����������
//            int p = min_heap.top(); min_heap.pop();
//            max_heap.push(p);
//        }
//    }
//
//    double GetMedian() {
//        if (max_heap.si * **_heap.size()) {    // ż�����ȣ�����������ƽ��ֵ
//            return (max_heap.top() + min_heap.top()) / 2.0;
//        }
//        return (double)max_heap.top();    // �������ȣ����ش󶥶ѶѶ�
//    }
//};
////#include <vector>
////class Solution {
////public:
////    void Insert(int num) {
////        if (!v.empty()) {
////            if (num >= v[n]) {
////                v.push_back(num);
////            }
////            else {
////                temp = v[n];
////                v[n] = num;
////                v.push_back(temp);
////            }
////        }
////        else {
////            v.push_back(num);
////        }
////        n++;
////
////    }
////
////    double GetMedian() {
////        size = v.size();
////        if (size % 2 == 0) {
////            return double((v[size / 2] + v[size / 2 - 1]) / 2);
////        }
////        else {
////            return v[size / 2];
////        }
////    }
////private:
////    vector<int>v;
////    int n = -1;
////    int temp;
////    int size;
////};