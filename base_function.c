#include "main.h"


/**
 * print_asint - prints an unsigned integer
 * @nums: list of variadic arguments
 *
 * Return: (0)
 *
 */

int print_asint(va_list nums)
{
	unsigned int i, num, digit, mod, input, count = 0;

	input = va_arg(nums, unsigned int);
	mod = input % 10;
	input = input / 10;
	num = input;
	digit = 1;

	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			digit = digit * 10;
		}
		while (digit >= 1)
		{
			i = input / digit;
			_putchar(i + '0');
			count++;
			input = input % digit;
			digit = digit / 10;
		}
	}
	_putchar(mod + '0');
	count++;
	return (count);
}

/**
 * print_octabase - prints the octal equivalent of an integer
 * @octa: list of variadic arguments
 * Return: on success, return (count)m otherwise (-1)
 */

int print_octabase(va_list octa)
{
	int i, size;
	unsigned int *octasize, tmp;
	unsigned int count = 0, n = 0;

	n = va_arg(octa, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	else
	{
		size = 0;
		tmp = n;
		while (tmp > 0)
		{
			tmp = tmp / 8;
			size++;
		}

		octasize = (unsigned int *)malloc(size * sizeof(unsigned int));
		if (octasize == NULL)
		{
			return (-1);
		}
	}
	while (n > 0)
	{
		octasize[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(octasize[i] + '0');
		count++;
	}
	return (count);
}

/**
 * print_hexa - prints hexadecimal integer in lowercase
 *
 * @hex: list of variadic arguments
 *
 * Return: on success (count)
 */

int print_hexa(va_list hex)
{
	char hexsize[20];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(hex, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexsize[i] = 87 + (n % 16);
		else
			hexsize[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hexsize[i]);
		count++;
	}
	return (count);
}

/**
 * print_hexbase - prints hexadecimal of an integer
 *
 * @BASE: list of variadic arguments
 *
 * Return: (0)
 */

int print_hexbase(va_list BASE)
{
	char hexsize[20];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(BASE, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexsize[i] = 55 + (n % 16);

		else
			hexsize[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hexsize[i]);
		count++;
	}
	return (count);
}

/**
 * print_strlen - prints a string and return length
 * @strlen: list of variadic arguments
 *
 * Return: (0)
 *
 */

int print_strlen(va_list strlen)
{
	unsigned long hexsize[20], n = 0;
	unsigned int count = 0;
	int i = 0;

	n = va_arg(strlen, unsigned long);
	if (n == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		count += 5;
	}
	else if (n > 0)
	{
		_putchar('0');
		_putchar('x');
		count += 2;
		while (n > 0)
		{
			if (n % 16 >= 10 && n % 16 <= 15)
				hexsize[i] = 87 + (n % 16);
			else
				hexsize[i] = 48 + (n % 16);
			n = n / 16;
			i++;
		}
		for (--i; i >= 0; i--)
		{
			_putchar(hexsize[i]);
			count++;
		}
	}
	return (count);
}
