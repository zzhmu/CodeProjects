//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//#include <algorithm>
//using namespace std;
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//   
//};
// 
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param pRoot TreeNode��
//     * @return int����vector<vector<>>
//     */
//    vector<vector<int> > Print(TreeNode* pRoot) {
//        queue<TreeNode*>q;
//        if (pRoot == nullptr) return;
//        q.push(pRoot);
//        vector < vector<int> > res;
//        int index = 1;
//        while (!q.empty())
//        {
//            vector<int>temp;
//            for (int i = 0; i < q.size(); i++) {
//                TreeNode* node = q.front();
//                q.pop();
//                temp.push_back(node->val);
//                if (node->left != nullptr) {
//                    q.push(node->left);
//                }
//                if (node->right != nullptr) {
//                    q.push(node->right);
//                }
//            }
//            if (index % 2 == 0) {
//                reverse(temp.begin(), temp.end());
//                res.push_back(temp);
//            }
//            else {
//                res.push_back(temp);
//                index += 1;
//            }
//        }
//        return res;
//        // write code here
//    }
//
//};
//TreeNode* buildTree(vector<string>& nodes) {
//    // ����ڵ�Ϊ�գ����� nullptr
//    if (nodes.empty()) {
//        return nullptr;
//    }
//    // �������ڵ�
//    TreeNode* root = new TreeNode(stoi(nodes[0]));
//
//    // ʹ�ö�������㹹��������
//    queue<TreeNode*> q;
//    q.push(root);
//
//    int i = 1;
//    while (!q.empty() && i < nodes.size()) {
//        TreeNode* cur = q.front();
//        q.pop();
//
//        // ���ӽ��
//        if (nodes[i] != "#") {
//            cur->left = new TreeNode(stoi(nodes[i]));
//            q.push(cur->left);
//        }
//        i++;
//
//        // ���ӽ��
//        if (i < nodes.size() && nodes[i] != "#") {
//            cur->right = new TreeNode(stoi(nodes[i]));
//            q.push(cur->right);
//        }
//        i++;
//    }
//    return root;
//}
//int main() {
//    ;
//
//    string x;
//    vector<string> res = { "3","9","20","#","#","15","7" };
//
//    Solution s;
//
//    TreeNode* root = buildTree(res);
//    vector<vector<int>> vv = s.levelOrder(root);
//
//    vector<vector<int>>::iterator it;
//    vector<int>::iterator jt;
//    cout << "���������";
//    for (it = vv.begin(); it != vv.end(); it++) {
//        vector<int>v = *it;
//        cout << "[";
//        for (jt = v.begin(); jt != v.end(); jt++) {
//            cout << *jt << " ";
//        }
//        cout << "]" << endl;
//    }
//
//}