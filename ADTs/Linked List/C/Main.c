#include "LinkedList.h"

int main(int argc, const char ** argv) {

	Node *root;
	Node **head = &root;
	
	initList(head);

	printf("%d\n", isEmpty(head));

	insert(head, 5);
	insert(head, 6);
	printf("%d\n", has(head, 6));
	insert(head, -4);

	printList(head);

	deleteNode(head, -4);
	printList(head);

	insert(head, 2);
	insert(head, -22);
	insert(head, 1);
	insert(head, 5);
	deleteNode(head, 5);
	printList(head);

	nuke(head);

	printf("%d\n", isEmpty(head));
	return 0;
}
