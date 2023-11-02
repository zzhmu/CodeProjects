//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//
//    vector < vector<int> >vv;
//    vector<int>v;
//    void dfu(vector<int>& num,int size) {
//        for (auto i:num) {
//            if (num.size() == size) {
//                vector<int>v;
//            }
//            v.push_back(i);
//            auto it = find(num.begin(), num.end(), i);
//            num.erase(it);
//            dfu(num, size);
//            num.push_back(i);
//            
//        }
//        if (v.size() == size && find(vv.begin(), vv.end(), v) == vv.end()) {
//            vv.push_back(v);
//        }
//    }
//    vector<vector<int> > permuteUnique(vector<int>& num) {
//        dfu(num,num.size());
//        return vv;
//        // write code here
//    }
//};
//int main() {
//    Solution s;
//    vector<int> num= {1,1,3};
//    vector<vector<int> >vv=s.permuteUnique(num);
//    for (auto it = vv.begin(); it != vv.end(); it++) {
//        vector<int> v = *it;
//        cout << "[";
//        for (auto jt = v.begin(); jt != v.end(); jt++) {
//            cout << *jt << " ";
//        }
//        cout << "]";
//    }
//
//}