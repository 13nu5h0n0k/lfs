#include "lfs_ftable.h"

struct lfs_superblock
{
    unsigned int blocks_count;
	unsigned int rootdir_loc;
	unsigned int ftable_loc;
	unsigned int block_size;
	struct lfs_ftable *ftable;
};

struct lfs_dir
{	
    
};

struct lfs_layout
{
    struct lfs_superblock sb;  
    char data[LFS_SIZE * LFS_BLOCK_SIZE];
};

struct lfs_file_desc
{
	unsigned long location;
	unsigned long size;
};

void lfs_refresh_ftable();