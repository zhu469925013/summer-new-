/**
���дһ��������ʹ�����ɾ��ĳ�������и����ģ���ĩβ���ڵ㡣���뺯����Ψһ����Ϊ Ҫ��ɾ���Ľڵ� ��

?

����һ������ --?head =?[4,5,1,9]�������Ա�ʾΪ:



?

ʾ�� 1��

���룺head = [4,5,1,9], node = 5
�����[4,1,9]
���ͣ�������������ֵΪ?5?�ĵڶ����ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 1 -> 9.
ʾ�� 2��

���룺head = [4,5,1,9], node = 1
�����[4,5,9]
���ͣ�������������ֵΪ?1?�ĵ������ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 5 -> 9.
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/delete-node-in-a-linked-list
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
}