#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int x) :
        val(x), left(nullptr), right(nullptr) {
    }
};
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot) {
        if (!pRoot) {
            return true;
        }
        return dfs(pRoot->left, pRoot->right);
    }

    bool dfs(TreeNode* l, TreeNode* r) {
        if (!l && !r) {
            return true;
        }
        if (!l || !r) {
            return false;
        }
        if (l->val != r->val) {
            return false;
        }
        // �ݹ���������
        return dfs(l->left, r->right) && dfs(l->right, r->left);
    }
};
TreeNode* buildTree(vector<string>& nodes) {
    // ����ڵ�Ϊ�գ����� nullptr
    if (nodes.empty()) {
        return nullptr;
    }
    // �������ڵ�
    TreeNode* root = new TreeNode(stoi(nodes[0]));

    // ʹ�ö�������㹹��������
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* cur = q.front();
        q.pop();

        // ���ӽ��
        if (nodes[i] != "#") {
            cur->left = new TreeNode(stoi(nodes[i]));
            q.push(cur->left);
        }
        i++;

        // ���ӽ��
        if (i < nodes.size() && nodes[i] != "#") {
            cur->right = new TreeNode(stoi(nodes[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}
int main() {

    string x;
    vector<string> res = { "1","2","2","3","4","4","3" };
    Solution s;
    TreeNode* root = buildTree(res);

    cout << s.isSymmetrical(root);
}