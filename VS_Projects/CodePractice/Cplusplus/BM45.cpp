//#include<vector>
//#include<iostream>
//#include<deque>
//using namespace std;
//class Solution {
//public:
//    vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
//        vector<int> ans;
//        deque<int> dq;     // 双端队列, 里面存的下标
//        int n = num.size();
//
//        for (int i = 0; i < n; i++) {
//            while (!dq.empty() && num[i] > num[dq.back()]) {    // 排除无用元素，
//                dq.pop_back();
//            }
//            dq.push_back(i);    // 将当先元素的下标入队。每个下标都要入一次队
//            if (i - dq.front() + 1 > size) dq.pop_front();    // 若队头元素不合法就弹出，如果此时的下标大于头部的下标+size+-1，说明超出滑动窗口的大小了
//            if (i >= size - 1) ans.push_back(num[dq.front()]);    // 将窗口最大值加入结果数组,从下标等于size-1时开始每次都要给出最大值
//        }
//
//        return ans;
//    }
//};