#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "Source string is this one";
	char src1[] = "Source string is this one";
	char dest[] = "Destination string.";
	char dest1[] = "Source string is this one";
	unsigned int n;
	unsigned int m;

	n = 9;
	m = 9;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
    n = strlcpy(dest, src, n);
	m = ft_strlcpy(dest1, src1, m);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	printf("AFTER_ft\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src1, dest1, m);
	return (0);
}
