#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main ()
{
	int fd;
	char *line;
	int lines;

	lines = 1;
	fd = open("input_test.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
		printf("%d->%s\n", lines++, line);
}
