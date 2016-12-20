
#include "stdafx.h"

 struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode *pt1 = l1;
		ListNode *pt2 = l2;

		ListNode *l1_hea_node = l1;
		ListNode *l2_hea_node = l2;
		
		ListNode L3 = NULL;
		int result=0;

			result = pt1->val + pt2->val;

			if (result > 10)
				result = result - 10;

			L3 = ListNode(result);
			ListNode *t = &L3;
			while (pt1->next != NULL&&pt2->next != NULL)
			{
				pt1 = pt1->next;
				pt2 = pt2->next;
				result = pt1->val + pt2->val;
				if (result > 10)
					result = result - 10;
				t->next->val = result;
				
				t = t->next;
			}
		
			ListNode *l3t,*l3t2,*l3t3 ;

			l3t = &L3;
			l3t2 = l3t->next;
		while (l3t2)
		{
			l3t3 = l3t2->next;
			l3t2->next = l3t;
			l3t = l3t2;
			l3t3 = l3t2;
		}

		return l3t;
	}
};


int main(int argc, char* argv[])
{
	Solution solution;
	int arr1[3] = { 2,4,3 };
	int arr2[3] = { 5,6,4 };

	ListNode l0 = ListNode(2);
	ListNode *l01=&l0;
	l01->next->val = 4;
	l01 = l01->next;
	l01->next->val = 3;
	
	ListNode *l1 = &l0;


	ListNode L20 = ListNode(5);
	ListNode* l02 = &L20;
	l02->next->val = 6;
	l02 = l02->next;
	l02->next->val = 4;

	ListNode *l2 = &L20;



	return  0;
}
