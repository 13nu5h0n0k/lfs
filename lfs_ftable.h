#define LFS_FTABLE_CAPACITY 20

struct lfs_ftable_entry {
    char name[255];
    unsigned long loc;
};

struct lfs_ftable {
	struct lfs_ftable_entry entries[LFS_FMAP_CAPACITY];
	unsigned int size;	
};