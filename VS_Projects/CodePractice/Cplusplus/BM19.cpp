//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param nums int����vector
//     * @return int����
//     */
//    int findPeakElement(int* nums, int numsLen)
//    {
//        int left = 0;
//        int right = numsLen - 1;
//        while (left < right)
//        {
//            int mid = ((right - left) >> 1) + left; //��ֱֹ����ӷ������
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