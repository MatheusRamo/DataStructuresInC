#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "linked_list.h"

typedef struct _node
{
	int val;
	struct _node *next;
} Node;

typedef struct _linked_list
{
	Node *begin;
	Node *end;
} LinkedList;

bool list_is_empty(LinkedList *L)
{
	return L->begin == NULL && L->end == NULL;
}

Node *Node_create(int val)
{
	Node *node = (Node *)malloc(sizeof(Node));
	node->val = val;
	node->next = NULL;

	return node;
}

LinkedList *LinkedList_create()
{
	LinkedList *L = (LinkedList *)malloc(sizeof(LinkedList));
	L->begin = NULL;
	L->end = NULL;

	return L;
}

void LinkedList_add_first(LinkedList *L, int val)
{
	Node *p = Node_create(val);
	if(list_is_empty(L))
	{
		L->end = p;
	}
	p->next = L->begin;
	L->begin = p;
}

void LinkedList_print(const LinkedList *L)
{
	Node *p = L->begin;
	printf("L ->");
	while(p != NULL)
	{
		printf(" %d ->", p->val);
		p = p->next;
	}
	printf(" NULL\n");
}


