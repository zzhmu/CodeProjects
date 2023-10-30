//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//using namespace std;
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
// 
//class Solution {
//public:
//    /**
//     *
//     * @param root TreeNode类
//     * @return int整型vector<vector<>>
//     */
//    vector<vector<int> > levelOrder(TreeNode* root) {
//        // write code here
//        vector<vector<int> > vv;
//        if (!root) {
//            return vv;//二叉树为空
//        }
//        queue<TreeNode*> qq;//队列存放相邻两层节点；
//        qq.push(root);
//        while (!qq.empty()) {
//            vector<int> tempv;
//            int size = qq.size();
//            for (int i = 0; i < size; ++i) {//将一层的节点size出队；
//                TreeNode* tt = qq.front();
//                qq.pop();
//                tempv.push_back(tt->val);
//                //将下一层的节点入队；
//                if (tt->left)qq.push(tt->left);
//                if (tt->right)qq.push(tt->right);
//            }
//            vv.push_back(tempv);//加入将要返回的数组中；
//        }
//        return vv;//返回最终结果
//    }
//};
//TreeNode* buildTree(vector<string>& nodes) {
//    // 如果节点为空，返回 nullptr
//    if (nodes.empty()) {
//        return nullptr;
//    }
//    // 创建根节点
//    TreeNode* root = new TreeNode(stoi(nodes[0]));
//
//    // 使用队列来逐层构建二叉树
//    queue<TreeNode*> q;
//    q.push(root);
//
//    int i = 1;
//    while (!q.empty() && i < nodes.size()) {
//        TreeNode* cur = q.front();
//        q.pop();
//
//        // 左子结点
//        if (nodes[i] != "#") {
//            cur->left = new TreeNode(stoi(nodes[i]));
//            q.push(cur->left);
//        }
//        i++;
//
//        // 右子结点
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
//    cout << "层序遍历：";
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