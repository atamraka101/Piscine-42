void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int lenght, void(*f)(int));

int	main(void)
{
	int abc[8] = { 134, 0, -14, -9999, 398, 465, 00, 99};
	int size = 8;
	ft_foreach(abc, size, &ft_putnbr);
	return (0);
}
