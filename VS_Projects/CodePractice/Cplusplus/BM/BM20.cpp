//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int count = 0;
//
//    int InversePairs(vector<int>& array) {
//        if (array.size() < 2)
//            return 0;
//
//        mergeSort(array, 0, array.size() - 1);
//
//        return count;
//    }
//
//    void mergeSort(vector<int>& array, int left, int right) {
//        int mid = left + (right - left) / 2;
//        if (left < right) {
//            mergeSort(array, left, mid);
//            mergeSort(array, mid + 1, right);
//            merge(array, left, mid, right);
//        }
//    }
//
//    void merge(vector<int>& array, int left, int mid, int right) {
//        vector<int> arr(right - left + 1);
//        int c = 0;
//        int s = left;
//        int l = left;
//        int r = mid + 1;
//        while (l <= mid && r <= right) {
//            if (array[l] <= array[r]) {
//                arr[c] = array[l];
//                c++;
//                l++;
//            }
//            else {
//                arr[c] = array[r];
//                count += mid + 1 - l;
//                count %= 1000000007;
//                c++;
//                r++;
//            }
//        }
//
//        while (l <= mid)
//            arr[c++] = array[l++];
//
//        while (r <= right)
//            arr[c++] = array[r++];
//
//        for (int num : arr) {
//            array[s++] = num;
//        }
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> array = { 7, 5, 6, 4 };
//    int result = solution.InversePairs(array);
//    cout << "Inverse pairs: " << result << endl;
//    return 0;
//}
