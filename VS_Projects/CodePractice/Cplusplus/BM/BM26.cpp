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
//     * @param root TreeNode��
//     * @return int����vector<vector<>>
//     */
//    vector<vector<int> > levelOrder(TreeNode* root) {
//        // write code here
//        vector<vector<int> > vv;
//        if (!root) {
//            return vv;//������Ϊ��
//        }
//        queue<TreeNode*> qq;//���д����������ڵ㣻
//        qq.push(root);
//        while (!qq.empty()) {
//            vector<int> tempv;
//            int size = qq.size();
//            for (int i = 0; i < size; ++i) {//��һ��Ľڵ�size���ӣ�
//                TreeNode* tt = qq.front();
//                qq.pop();
//                tempv.push_back(tt->val);
//                //����һ��Ľڵ���ӣ�
//                if (tt->left)qq.push(tt->left);
//                if (tt->right)qq.push(tt->right);
//            }
//            vv.push_back(tempv);//���뽫Ҫ���ص������У�
//        }
//        return vv;//�������ս��
//    }
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