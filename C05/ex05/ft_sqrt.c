#include <stdio.h>

int	recur(i,nb)
{
if (i*i == nb)
return i;
else if (i*i > nb) 
return (0);
else 
return recur(i+1,nb);
}
int	ft_sqrt(int nb)
{
	return recur(1,nb);
}
int main(void)
{
	printf("%d",ft_sqrt(-125));
	return (0);

}

