//#include<vector>
//#include<queue>
//using namespace std;
//class Solution {
//public:
//    priority_queue<int> max_heap;    // 大顶堆
//    priority_queue<int, vector<int>, greater<int>> min_heap;    // 小顶堆
//
//    void Insert(int num) {
//        if (max_heap.empty() || max_heap.top() > num) max_heap.push(num);    // 大顶堆为空或大顶堆堆顶大于插入元素
//        else min_heap.push(num);    // 否则加入小顶堆
//
//        // size()方法得到的类型size_type是无符号的, 切记不要直接放在判断语句中, 要先转成int型
//        int a = max_heap.size(), b = min_heap.size();
//
//        if (a - b > 1) {    // 大顶堆元素数量过多，保证大顶堆大小-小顶堆大小大于等于1
//            int p = max_heap.top(); max_heap.pop();
//            min_heap.push(p);
//        }
//        else if (b > a) {    // 小顶堆元素数量过多
//            int p = min_heap.top(); min_heap.pop();
//            max_heap.push(p);
//        }
//    }
//
//    double GetMedian() {
//        if (max_heap.si * **_heap.size()) {    // 偶数长度，返回两数的平均值
//            return (max_heap.top() + min_heap.top()) / 2.0;
//        }
//        return (double)max_heap.top();    // 奇数长度，返回大顶堆堆顶
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