#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "lfs.h"

#define BLOCK_SIZE_DIVISOR 1024

char *root;
int lfs_fd;

int lfs_create(const char *root, unsigned int block_size, unsigned long blocks_count)
{
	if (block_size % BLOCK_SIZE_DIVISOR != 0)
		return -1;

	unsigned long i;
	char *filler;
	struct lfs_superblock sb;

	sb.rootdir_loc = 

	lfs_fd = open(path, O_RDWR | O_CREAT | O_DIRECT);

	

	filler = calloc(block_size, sizeof(char));
	lseek(lsf_fd, block_size, SEEK_SET);
	for (i = 0; i < blocks_count; i++)		
	    write(lfs_fd, filler, sizeof(filler));
	
}




void lfs_refresh_ftable()
{
	
}