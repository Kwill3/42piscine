#include <unistd.h>

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

void	set_array(int arr[8], int n)
{
	int	count;

	count = n;
	while (count != 0)
	{
		arr[n - count] = n - count;
		count--;
	}
}

void	ft_print_combn(int n)
{
	int	arr[8];
	int	count;
	// int loop;
	
	set_array(arr, n);
	count = n;
	//loop = n;
	while (arr[0] != 10 - n)
	{
		//while (loop != 0)
		//{
			while (arr[n - count] <= 10 - count)
			{
				if (n - count == n - 1)
				{
					print_combn(arr, n);
					arr[n - count]++;
					count = n;
				}
				count--;
			}
			arr[(n - count - 1)]++;
			arr[n - count] = arr[(n - count - 1)] + 1;
		//	loop--;
		//}
		//loop = n;
	}
}
