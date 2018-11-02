//���ض�����������
//����������������BST���ĸ��ڵ��һ��ֵ�� 
//����Ҫ��BST���ҵ��ڵ�ֵ���ڸ���ֵ�Ľڵ㡣 
//�����Ըýڵ�Ϊ���������� ����ڵ㲻���ڣ��򷵻� NULL��
//���磬
//�������������� :
//
//4
/// \
//2   7
/// \
//1   3
//
//��ֵ: 2
//��Ӧ�÷����������� :
//		  2
//		  / \
//		  1   3
//������ʾ���У����Ҫ�ҵ�ֵ�� 5������Ϊû�нڵ�ֵΪ 5������Ӧ�÷��� NULL��
//
class Solution {
public:
	TreeNode* searchBST(TreeNode* root, int val) {
		if (root == NULL)
		{
			return NULL;
		}
		if (root->val == val)
		{
			return root;
		}
		else if (root->val > val)
		{
			return searchBST(root->left, val);
		}
		else
		{
			return searchBST(root->right, val);
		}
		return NULL;
	}
};