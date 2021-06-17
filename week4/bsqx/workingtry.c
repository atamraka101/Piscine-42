#include <stdio.h>
#include <stdlib.h>

typedef struct s_map_line
{ 
	char *data; // buffer to hold the line data
	char *projection; // pointer to buffer that holds all the OR values for the line
	int zero_lens; // length of the largest continuous 0s (empty space) in the line.
	int pos;
} t_map_line;

char	*ft_strcpy(char *dest, char *src);

void ft_OR_operation(char *S1, char *S2)
{
	int i;
	i = 0;
	while (S1[i] != '\0')
	{
		if (S1[i] == '1' || S2[i] == '1')
			S1[i] = '1';
		i++;
	}
}

int calculate_max_zeros(char *data)
{
	int i;
	int count, prev_count;
	
	i = 0;
	count = 0;
	prev_count = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '0')
			count++;
		if (data[i] == '1')
		{
			if (count > prev_count)
				prev_count = count;
			count = 0;
		}
		i++;
	}
	if (count > prev_count)
		prev_count = count;
	return (prev_count);
}

void ft_bitmap_projection(t_map_line *lines, int rows, int cols)
{
	int i = 0;
	int j = 0;
	int max_zeros = 0;
	int count, prev_count;
	prev_count = 0;
	while (i < rows)
	{
		j = i + 1;
		prev_count = 0;
		while (j < rows)
		{
			
			ft_OR_operation(lines[i].projection, lines[j].data);
			count = calculate_max_zeros(lines[i].projection);
			if (((prev_count > count) && ((j - i) > prev_count)) || max_zeros > count)
			{
				printf("Breaking here\n");
				break;
			}
			prev_count = count;
			printf("i: %d, j: %d, count: %d, prev_count: %d, max_zeros: %d\n", i, j, count, prev_count, max_zeros);
			/*if (j > count || (rows - j) < count)
			{
				lines[i].zero_lens = count;
				break;
			}*/
			j++;
		}
		if (max_zeros < prev_count)
			max_zeros = prev_count;
		i++;
	}
}

void ft_print_projection(t_map_line *lines, int rows)
{
	int i = 0;

	while (i < rows)
	{
		printf("lines[%d].projection: %s\n", i, lines[i].projection);
		i++;
	}
}

int main(int argc, char **argv)
{
	t_map_line *lines;
	int cols, rows, i, j, k;
	
	cols = 0;
	rows = 12;
	lines = (t_map_line*)malloc(sizeof(t_map_line) * rows);

	/* counting no of characters in a line*/
	while (argv[1][cols] != '\n')
		cols++;

	i = 0;
	j = 0;
	/* Data copy begin */
	while (i < rows)
	{
		lines[i].data = (char*)malloc(sizeof(char) * (cols + 1));
		lines[i].projection = (char*)malloc(sizeof(char) * (cols + 1));
		k = 0;
		printf("while i: %d\n", i);
		while(argv[1][j] != '\0')
		{
			if (argv[1][j] == '\n')
			{
				j++;
				break;
			}
			if (argv[1][j] == 'o')
				lines[i].data[k] = '1';
			else 
				lines[i].data[k] = '0';
			k++;
			j++;
		}
		lines[i].data[k] = '\0';
		ft_strcpy(lines[i].projection, lines[i].data);
		i++;
	}
	/* data copy ends */

	i = 0;
	while (i < rows)
	{
		j = 0;
		printf("Line: %d --> %s", i, (lines[i].projection));
		
		printf("\n");
		//printf("line[%d]->data: %s\n", i, (lines[i]).data);
		i++;
	}

	ft_bitmap_projection(lines, rows, cols);
	ft_print_projection(lines, rows);

	i = 0;
	while (i < rows)
	{
		free(lines[i].data);
		i++;
	}
	free(lines);
	return 0;
}
/*  ./a.out $'..o..\no...o\n..ooo' */