#include "libft.h"
#include <string.h>

int	main(void)
{
	char	name[] = "issamlaafer";
	char	n[] = "issam laafar";

	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isascii('c'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isprint('g'));
	printf("%ld\n", ft_strlen("issam"));
	printf("%c\n", ft_tolower('C'));
	printf("%c\n", ft_toupper('c'));
	ft_memset(name, '+', 3);
	printf("%s\n", name);
	printf("%s\n", ft_strchr(n, 'm'));
	printf("%s\n", ft_strrchr(n, 'a'));
	char s1[] = "ffdfgdfg";
	char s2[] = "dfgdfgdfg";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
	char nr[] = " 	+-156n5252";
	printf("%d\n", ft_atoi(nr));

	char testmemchr[] = "issam laafar";
	char *res = ft_memchr(testmemchr, 'm' , 6);

	if(res)
		printf("%s\n" , res);
	else
		printf("Not found\n");

	char st1[] = "abc";
	char st2[] = "abcj";
	printf("%d\n", ft_memcmp(st1, st2, 4));
	printf("%d\n", ft_memcmp(st1, st2, 4));

	printf("--------------------------\n");

	char big[] = "Hello bro";
	char little[] = "jh";

	printf("%p\n" , ft_strnstr(big , little ,5));
}
