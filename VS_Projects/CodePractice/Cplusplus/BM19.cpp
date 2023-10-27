//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param nums int整型vector
//     * @return int整型
//     */
//    int findPeakElement(int* nums, int numsLen)
//    {
//        int left = 0;
//        int right = numsLen - 1;
//        while (left < right)
//        {
//            int mid = ((right - left) >> 1) + left; //防止直接相加发生溢出
//            if (nums[mid] < nums[mid + 1])
//                left = mid + 1;
//            else
//                right = mid;
//        }
//        return left;
//    }
//
//
//};
//int main() {
//    vector<int>v;
//    int x;
//    while (cin>>x)
//    {
//        v.push_back(x);
//    }
//    
//    Solution s;
//    cout << s.findPeakElement(v);
//
//    return 0;
//}