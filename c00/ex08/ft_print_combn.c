#include <unistd.h>

// Prints the whole combination
void	print_combn(int arr[8], int n)
{
	int	count;
	int	p;

	count = 0;
	while (count != n)
	{
		p = arr[count] + '0';
		write(1, &p, 1);
		count++;
	}
	write(1, ", ", 2);
}

// Prints the last combination
void	print_last(int arr[8], int n)
{
	int	count;
	int	p;

	count = 0;
	while (count != n)
	{
		p = arr[count] + '0';
		write(1, &p, 1);
		count++;
	}
}

// Check if the count needs to be carried forward
// If so, every digit behind it will be + 1 of the front
void	carry_combn(int arr[8], int n, int count)
{
	if (arr[n - count] == (11 - count))
	{
		arr[n - 1 - count]++;
		while (count != 0)
		{
			arr[n - count] = arr[n - 1 - count] + 1;
			count--;
		}
	}
}

void	check_combn(int arr[8], int n)
{
	int	count;
	int	mark;

	mark = 0;
	count = n;
	if (arr[0] == 10 - n)
	{
		print_last(arr, n);
	}
	else
	{
		while (count != 0)
		{
			if (arr[n - count] == 10)
			{
				mark++;
			}
			count--;
		}
		if (mark == 0)
		{
			print_combn(arr, n);
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[8];
	int	count;

	count = n;
	while (count != 0)
	{
		arr[count - 1] = count - 1;
		count--;
	}
	count = n;
	while (arr[0] != 10 - n)
	{
		while (count != 0)
		{
			carry_combn(arr, n, count);
			count--;
		}
		check_combn(arr, n);
		arr[n - 1]++;
		count = n;
	}
	if (n == 1)
		print_last(arr, n);
}
