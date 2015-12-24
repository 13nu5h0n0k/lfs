#define LFS_FTABLE_CAPACITY 20

struct lfs_ftable_entry 
{
    char name[255];
    unsigned long loc;
};

struct lfs_ftable 
{
	struct lfs_ftable_entry entries[LFS_FMAP_CAPACITY];
	unsigned int size;	
};

void lfs_ftable_create(struct lfs_ftable *, unsigned int);

int lfs_ftable_put(struct lfs_ftable *, const char *, unsigned long);

unsigned long lfs_ftable_get(struct lfs_ftable *, const char *);