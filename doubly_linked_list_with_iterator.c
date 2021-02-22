/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: S02
 * Title:			Doubly Linked List implementation
 * Author:			*/<your name>;/*
 * ----------------------------------------------------------
 * Description:
 * Implementation of a doubly linked list.
 * ----------------------------------------------------------
 */

/*
  Implementation notes:

  1) The 'ListData' struct of this linked list SHALL have
     - a pointer to the head node, 
     - a pointer to the tail node
     - and the size of the list 
    as members!

  2) List list, node, and iterator allocation: 
     Use functions `mem_alloc(…)` and `mem_free(…)`
     declared in `allocator.h`. DO NOT use `malloc(…)` and `free(…)` directly
     as unit tests will fail.

  3) Use 'limits.h' to get maximum and minimum values for numeric types, if needed.

  4) Implement 'list_iterator.h' in this file as well.

  5) Avoid code duplication wherever (reasonably) possible.
     This is valid for implementation of similar functions as well
     as for reoccurring code patterns, such as list iteration.
     Nevertheless, aim for efficiency, e.g. `remove_all` shall traverse 
     the list only once and not use `remove` as defined, because
     the later would start at the beginning of the list for each iteration.
*/

#include "doubly_linked_list_with_iterator.h"

/** The type of list nodes */

/** The implementation of list node data */

/** The implementation of list data */

/** The implementation of list iterator data */


/* ===================================================================== */
/* private list functions */

/* abstract away and generalize also memory allocation for list nodes */
static <node-type> list_obtain_node(<params>) {
}

static void list_release_node(<node-type>) {
}

/* optional: implement a function for printing the content of the list - may be useful for debugging */
void list_dump(char* prefix, IntList list) {
}

/* ===================================================================== */
