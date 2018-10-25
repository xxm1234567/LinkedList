#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

int main()
{

	linked_list * head;
	linked_list * node, *p1, *p2;

	// init a list
	head = (linked_list *)malloc(sizeof(struct linked_list));
	head->next = NULL;


	// test of add_to_list
	int res;
	res = add_to_list(head, "E");
	res = add_to_list(head, "D");
	res = add_to_list(head, "G");
	res = add_to_list(head, "K");
	res = add_to_list(head, "Z");
	res = add_to_list(head, "B");

	// test of display list
	res = display_list(head);

	node = search_from_list(head, "D");// node->data="D"
	node = search_from_list(head, "A");// node == NULL

	// test of swap_items
	p1 = search_from_list(head, "D");
	p2 = search_from_list(head, "Z");
	res = swap_items(head, p1, p2);
	res = display_list(head);

	// test of linkedlist_status
	res = linkedlist_status(head);

	// test of sort_list
	sort_list(head);
	res = display_list(head);



	// test of delete_from_list
	res = delete_from_list(head, 0);
	res = display_list(head);
	res = delete_from_list(head, 1);
	res = display_list(head);
	res = delete_from_list(head, 1);
	res = display_list(head);

	// test of empty_list
	res = empty_list(head);

	return 0;
}

