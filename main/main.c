#include "linked_list.h"


int main(int argc, char *argv[])
{
	LinkedList *L = LinkedList_create();
	LinkedList_add_first(L, 9);
	LinkedList_add_first(L, 8);
	LinkedList_add_first(L, 7);
	LinkedList_add_first(L, 6);
	LinkedList_print(L);

	return 0;
}