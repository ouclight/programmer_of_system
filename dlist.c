#include <stdio.h>

/*
*	Double Link List
*	
*@member
*
*@method
*	dlist_create;
*	dlist_insert;
*	dlist_prepend;
*	dlist_append;
*	dlist_delete;
*	dlist_get_from_index；
*	dlist_set_from_index;
*	dlist_foreach;
*	dlist_length;
*	dlist_find;
*	dlist_destory；
*/

/// struct
typedef struct _D_Link_Node
{
	void *data;
	struct _D_Link_Node *prev;
	struct _D_Link_Node *next;
	int length;
}DLinkNode;

typedef void *(*ElementCreateFunction)(void *ctx);
typedef void (*ElementDestroyFunction)(void *ctx);

DLinkNode *dlist_create(ElementCreteFunction *ecf, void *ctx)
{
	
}







