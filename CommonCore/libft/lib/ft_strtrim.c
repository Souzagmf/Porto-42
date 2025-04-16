
#include "libft.h"
#include <stdio.h>
// Remove the SET fom beginin and end from S1
char *ft_strtrim(char const *s1, char const *set)
{
	int pos1;
	int pos2;

	if (!s1 || !set || *s1 == '\0')
		return (ft_strdup(""));
	pos1 = 0;
	pos2 = ft_strlen(s1) - 1;
	while (s1[pos1] && ft_strchr(set, (int)s1[pos1]))
		pos1++;
	while (s1[pos2] && ft_strrchr(set, (int)s1[pos2]))
		pos2--;
	if (pos2 < pos1)
		return (ft_strdup(""));
	return (ft_substr(s1, pos1, (pos2 - pos1) + 1));
}
/*char *ft_strtrim(char const *s1, char const *set)
{
	int pos1;
	int pos2;

	pos1 = 0;
	if (!s1 || !set || *s1 == '/0')
		return (ft_strdup(""));
	pos2 = ft_strlen(s1) - 1;

	while (s1[pos1] && ft_strchr(set, (int)s1[pos1]))
		pos1++;
	while (pos2 > pos1 && ft_strrchr(set, (int)s1[pos2]))
		pos2--;
	if (pos2 < pos1)
		return (ft_strdup(""));
	return (ft_substr(s1, pos1, (pos2 - pos1) + 1));
}*/