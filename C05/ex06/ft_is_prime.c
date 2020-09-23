#include <stdio.h>

int ft_is_prime(int nb)
{
int i = 2;
if (nb <= 1)
return (0);
else
{
while(i< nb/2)
{
if (! (nb % i))
return (0);
i++;
}
return 1;
}
}
int main()
{
printf("%d",ft_is_prime(119));
return (0);
}
