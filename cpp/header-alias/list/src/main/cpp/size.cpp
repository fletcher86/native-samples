#define LIST_MODULE_EXPORT
#include "foo/bar/linked_list.h"
#include "foo/bar/node.h"

std::size_t linked_list::size() const {
    std::size_t size = 0;

    for (node * it = head_; it != NULL; ++size, it = it->next()) {}

    return size;
}
