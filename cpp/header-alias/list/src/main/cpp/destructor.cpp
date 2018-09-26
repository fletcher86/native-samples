#define LIST_MODULE_EXPORT
#include "foo/bar/linked_list.h"
#include "foo/bar/node.h"

linked_list::~linked_list() {
    for (node *it = head_; it != NULL;) {
        node *next_it = it->next();
        delete it;
        it = next_it;
    }
}
