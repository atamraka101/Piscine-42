#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printline(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar('/');
		}
		else if (i == width - 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

int	height_calculations(int size)
{
	int determine_height;

	determine_height = 3;
	while (size != 1)
	{
		determine_height +=1;
		size--;
	}
	return (determine_height);
}

int width_calculations(int size)
{
	int determine_width;
	int counter_for_determining_width;
	int counter_inside;
	int counter_for_size;

	determine_width = 7;
	counter_for_determining_width = 1;
	counter_inside = 3;
	counter_for_size = 1;
	printf("Block: %d Width %d\n", counter_for_size, determine_width);
	while (size != 0)
	{
		if ((counter_for_determining_width % 2) != 0)
		{
			determine_width += counter_inside + counter_inside;
			counter_for_determining_width++;
			printf("Block: %d Top Width %d\n", counter_for_size, determine_width);
		}
		else
		{
			determine_width += counter_inside + counter_inside;
			counter_for_determining_width++;
			counter_inside++;
			printf("Block: %d Top Width %d\n", counter_for_size, determine_width);
		}
		size--;
		counter_for_size++;
	}
	return (determine_width);
}

/*void	sastantua(int size)
{
	int h;
	int w;

	if (size <= 0)
	{
		return;
	}
	h = height_calculations(size);
	w = width_calculations(size);
	printf("%d", h);
	printf("%d", w);
}*/

void sastantua(int size)
{
	int block;
	int block_height;
	int row_count;
	int width; 
	int width_inc_per_block;

	block = 1;
	block_height = 3;
	width = 3;
	width_inc_per_block = 0;
	while (block <= size)
	{
		//printf ("Block: %d, height: %d\n", block, block_height);
		row_count = 1;
		while (row_count <= block_height)
		{
			//printf("Row: %d, width: %d\n", row_count, width);
			ft_printline(width);
			width = width + 2;
			row_count++;
		}
		if ((block % 2) == 1)
		{
			width_inc_per_block = width_inc_per_block + 2;
		}
		width = width + 2 + width_inc_per_block;
		block_height++;
		block++;
	}
}


int main(void)
{
	sastantua(5);
	return (0);
}