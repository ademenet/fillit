#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

#define MY_TEST(name, ft) printf("\033[0m%s -- \033[0m", name); ft(); \
	printf("\n");

#define check_int_eq(std, own) if(std ==  own) { printf("\033[32mo\033[32m"); }\
									   else { printf("\033[31mx\033[31m"); }

#define check_str_eq(std, own) if(!strcmp(std, own)) \
{ printf("\033[32mo\033[32m"); } else { printf("\033[31mx\033[31m"); }

#define check(cond) if(cond) { printf("\033[32mo\033[32m"); }\
	else { printf("\033[31mx\033[31m"); }

long	ft_sqrt(int nb);
int		ft_bsq(int area);

void	test_ft_sqrt()
{
	check(ft_sqrt(1) == 1);
	check(ft_sqrt(2) == 1);
	check(ft_sqrt(9) == 3);
	check(ft_sqrt(40) == 6);
	check(ft_sqrt(45) == 6);
	check(ft_sqrt(1569) == 39);
	check(ft_sqrt(1569887456) == 39621);
}

void	test_ft_bsq()
{
	check(ft_bsq(2) == 3);
	check(ft_bsq(10) == 7);
	check(ft_bsq(8) == 6);
}

int		main(void)
{
	MY_TEST("ft_sqrt", test_ft_sqrt);
	MY_TEST("ft_bsq", test_ft_bsq);
	return (0);
}
