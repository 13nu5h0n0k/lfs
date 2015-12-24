#include "lfs_map.h"
#include <stdlib.h>
#include <string.h>

void lfs_ftable_create(struct lfs_ftable *m, unsigned int capacity)
{	
    m->capacity = capacity;
    m->size = 0;
}

int lfs_ftable_put(struct lfs_ftable *m, const char *name, unsigned long loc)
{
    if (m->size == LFS_FTABLE_CAPACITY)
        return -1;
    
    (m->entries)[m->size].name = name;
    (m->entries)[m->size].loc = loc;
}

unsigned long lfs_ftable_get(struct lfs_ftable *m, const char *name)
{
    int i;
    unsigned int size = m->size;

    for (i = 0; i < size; i++)      	
    	if (strcmp((m->entries)[i].name, name) == 0)
    		return (m->entries)[i].loc;
    
    return 0;
}