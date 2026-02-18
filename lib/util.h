#ifndef UTIL_H
#define UTIL_H

#include "tag.h"

struct TagComparator {
    bool operator()(const Tag* a, const Tag* b) const {
        if (!a || !b)
            return a < b;

        return *a < *b;
    }
};

#endif // UTIL_H
