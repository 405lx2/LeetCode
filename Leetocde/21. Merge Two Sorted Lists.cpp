#include "stdafx.h"

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

		ListNode preHead(0), *p = &preHead;
		while (l1&&l2)
		{
			int value = l1->val > l2->val ? l1->val : l2->val;
			p->next = new ListNode(value);
			p = p->next;
			l1 = (l1->val >=l2->val) ? l1->next : l1;
			l2 = (l1->val >= l2->val) ? l2 : l2->next;

		}
		return preHead.next;
	}
};

int main()
{

	return 0;
}