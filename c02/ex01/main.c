#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
		char			src[] = "Source.";
		char			dest[40] = "Destination string.";
		char			src1[] = "Source.";
		char			dest1[40] = "Destination string.";
		unsigned int	n;

		n = 5;
		printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	    strncpy(dest, src, n);
	    ft_strncpy(dest1, src1, n);
		printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
		printf("AFTER_ft\n\tsrc: %s\n\tdes: %s\n", src1, dest1);
}
