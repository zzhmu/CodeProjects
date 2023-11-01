#include <vector>
#include <list>
using namespace std;

//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& num) {
//        vector<vector<int>> res;
//        list<int> list;
//        backTrack(num, list, res);
//        return res;
//    }
//
//private:
//    void backTrack(const vector<int>& num, list<int>& list, vector<vector<int>>& res) {
//        if (list.size() == num.size()) {
//            res.push_back(vector<int>(list.begin(), list.end()));
//            return;
//        }
//        for (int i = 0; i < num.size(); i++) {
//            if (find(list.begin(), list.end(), num[i]) != list.end())
//                continue;
//            list.push_back(num[i]);
//            backTrack(num, list, res);
//            list.pop_back();
//        }
//    }
//};
class Solution {
public:
    vector<vector<int>> permute(vector<int>& num) {

        vector<vector<int>> res;

        vector<int> list;

        res.push_back(list); // 先加入一个空的列表


        for (int i = 0; i < num.size(); i++) {
            vector<vector<int>> tmp;

            for (vector<int> r : res) {
                for (int j = 0; j < r.size() + 1; j++) {
                    r.insert(r.begin() + j, num[i]);
                    vector<int> temp(r);
                    tmp.push_back(temp);
                    r.erase(r.begin() + j);
                }
            }
            res = tmp;
        }

        return res;
    }
};
