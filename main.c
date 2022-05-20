#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int test = 'A';
	printf("ft_isalpha\n");	
	printf("%d\n", ft_isalpha(test));
	printf("%d\n", isalpha(test));
	printf("=================================\n");
	
	int num = '1'; 
	printf("ft_isdigit\n");
	printf("%d\n", ft_isdigit(num));
	printf("%d\n", isdigit(num));
	printf("================================\n");	
	
	int c = '%';
	printf("ft_isalnum\n");
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	printf("===============================\n");
	
	int d = '-';
	printf("ft_isascii\n");
	printf("%d\n", ft_isascii(d));
	printf("%d\n", isascii(d));
	printf("===============================\n");
	
	int e = '%';
	printf("ft_isprint\n");
 	printf("%d\n", ft_isprint(e));
 	printf("%d\n", isprint(e));
 	printf("===============================\n");
	
	char name[] = "aklfjklasf";
	printf("ft_strlen\n");
	printf("%zu\n", ft_strlen(name));
	printf("%zu\n", strlen(name));
	printf("==============================\n");
	
	char name1[] = "copia e cole aqui";
	printf("ft_memset\n");
	printf("%s\n", name1);
	ft_memset(name1, '4', 7);
	printf("%s\n", name1);
	memset(name1, '4', 7);
	printf("%s\n", name1);
	printf("===============================\n");

	char name2[] = "asdhashdklsd";
	printf("ft_bzero\n");
	ft_bzero(name2+3, 7);
	printf("%s\n", name2);
	bzero(name2+3, 7);
 	printf("%s\n", name2);
 	printf("===============================\n");

	char u1[] = "copiado";
	char u2[] = "colado aqui";
	printf("ft_memcpy\n");
	printf("%s\n", u2);
	ft_memcpy(u2, u1, 7);
	printf("%s\n", u2);
	memcpy(u2, u1, 7);
	printf("%s\n", u2);
	printf("==============================\n");
	
	char z1[] = "Testando";
	char z2[] = "botando aqui";
	printf("ft_memmove\n");
	printf("%s\n", z2);
	ft_memmove(z2, z1, 7);
	printf("%s\n", z2);
	memmove(z2, z1, 7);
	printf("%s\n", z2);
	printf("==============================\n");

	char a1[] = "tanto fazzwz";
	char a2[150] = "tante fez";
	printf("ft_strlcpy\n");
	printf("%s\n", a2);
	ft_strlcpy(a2, a1, 11);
	printf("%s\n", a2);
	strlcpy(a2, a1, 11);
	printf("%s\n", a2);
	printf("==============================\n");
	
	char dest[] = "Colocando";
	char sour[] = "aqui embaixo";
	printf("ft_strlcat\n");
	ft_strlcat(dest, sour, 12);
	printf("%s\n", dest);
	/*strlcat(dest, sour, 12);
	printf("%s\n", dest);*/
	printf("==============================\n");
	
	/*char name3[] = "estou aqui";
	char *receive;
	int a3 = 4;
	int a4 = 10;
	printf("ft_substr\n");
	receive = ft_substr(name3, a3, a4);
	printf("%s\n", receive);*/
	printf("===============================\n");	

	char m1[] = "um ";
	char m2[] = "dois";
	char *receive1 = ft_strjoin(m1, m2);
	printf("%s\n", receive1);
	printf("================================\n");

	return 0;
}
