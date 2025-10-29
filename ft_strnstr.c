#include "libft.h"



char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	// Edge case: if needle is an empty string, return haystack.
	if (*needle == '\0')
		return ((char *)haystack);

	i = 0;
	// Loop through haystack up to 'len' characters.
	while (i < len && haystack[i] != '\0')
	{
		// Check if the current character of haystack matches the first character of needle.
		if (haystack[i] == needle[0])
		{
			j = 0;
			// If it matches, start a nested loop to check for the full needle.
			while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
			{
				j++;
			}
			// If the full needle was found (we reached its null terminator).
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}

	// If the needle was not found within the first 'len' characters, return NULL.
	return (NULL);
}
