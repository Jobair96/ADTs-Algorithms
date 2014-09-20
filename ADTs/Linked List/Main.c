#include "LinkedList.h"


int main(int argc, const char * argv[])
{

	
	struct Node* first;
	init(&first);
	printf("%d\n", isEmpty(&first));
	insert(&first, 5);
	insert(&first, -333);
	insert(&first, 9911);
	insert(&first, -4);
	printf("%d\n", isEmpty(&first));
	printf("%d\n", has(&first, 9911));
	printf("%d\n", has(&first, -4));
	printf("%d\n", has(&first, 5));
	printf("%d\n", has(&first, -19));
	printList(&first);
	delete(&first, 5);
	printList(&first);
	delete(&first, 9911);
	printList(&first);
	printf("%d\n", has(&first, -333));
	nuke(&first);
	printf("%d\n", isEmpty(&first));
	
	getchar();
	return 0;
}

