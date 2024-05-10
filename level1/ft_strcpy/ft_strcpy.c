#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
    return (s1);
}

int	main()
{
	char	str1[20] = "";
	char	str2[20] = "Boat";

	ft_strcpy(str1, str2);
	printf("str-1 : %s\n", str1);
	printf("str-2 : %s\n", str2);
}