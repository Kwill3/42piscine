#include <unistd.h>

// Arranges numbers into array
void	array_combn(int arr[8], int n)
{
	int	count;

	count = n;
	while (count != 0)
	{
		arr[count - 1] = count - 1;
		count--;
	}
}

// Prints combination one letter at a time
void	write_combn(char a)
{
	write(1, &a, 1);
}

// Prints the whole combination
void	print_combn(int arr[8], int n)
{
	int	count;

	count = 0;
	while (count != n)
	{
		write_combn(arr[count] + '0');
		count++;
	}
	write(1, ", ", 2);
}

// Prints the last combination
void	print_last(int arr[8], int n)
{
	int count;

	count = 0;
	while (count != n)
	{
		write_combn(arr[count] + '0');
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
	int count;

	count = n;
	if (arr[0] == 10 - n)
		print_last(arr, n);
	else
	{
		while (count != 0)
		{
			if (arr[n - count] != 10)
			{
				return ;
			}
			print_combn(arr, n);
			count--;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[8];
	int	count;
	
	array_combn(arr, n);
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
}
