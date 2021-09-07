#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[15] = "Source.";
	char dest[15] = "Dest.";
	char src1[15] = "Source.";
	char dest1[15] = "Dest.";

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strcpy(dest, src);
	strcpy(dest1, src1);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	printf("AFTER_ft\n\tsrc: %s\n\tdes: %s\n", src1, dest1);
}
