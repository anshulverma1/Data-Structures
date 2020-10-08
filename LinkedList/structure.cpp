#include <iostream>
using namespace std;

// Linked List: Linear DS | +Easy manipulation[Insert / Delete] | -sequential access.
// Node: Contains data and a pointer to the next node.

struct ListNode
{
	int data;
	ListNode* next;
	ListNode(int x)
	{
		data = x;
		next = nullptr;
	}
};


void printList(ListNode* node)
{
	while(node != nullptr)
	{
		cout << node->data << ' ';
		node = node->next;
	}
}


// Always free Heap memory[User Allocated], to avoid memory leaks.
void deleteList(ListNode* node)
{
	ListNode* temp = node->next;
	while(node != nullptr)
	{
		delete(node);
		node = temp;
		temp = (node != nullptr) ? node->next : nullptr;
	}
}


int main()
{
	ListNode* head = new ListNode(1);
	ListNode* temp = head;
	temp->next = new ListNode(2);
	temp = temp->next;
	temp->next = new ListNode(5);
	temp = temp->next;
	temp->next = new ListNode(4);
	temp = temp->next;
	temp->next = new ListNode(3);
	temp = temp->next;
	printList(head);
	deleteList(head);
	return 0;
}