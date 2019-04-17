
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
	int Data;
	node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE temp);
void Swap(PPNODE Src);
void InsertAt(PPNODE Src, PPNODE dest, int pos);

BOOL ListIntersect(PNODE First, PNODE Second);
BOOL ListPallindrom(PNODE First);
BOOL ListCmp(PNODE First, PNODE Second);

int MiddleNode(PNODE head);