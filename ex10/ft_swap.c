#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int s;
	s = *a;
	*a = *b;
	*b = s;
}

int	main(void)
{
	int a,b;

	a = 5;
	
	b = 6;	

	ft_swap(&a,&b);
	printf("%d %d",a,b);
	return (0);
}
