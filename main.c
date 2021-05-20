#include "libasm.h"
#include <stdio.h>

int	main(void)
{
	/********** STRLEN **********
	char	uno[] = "1";
	char	dos[] = "22";
	char	tre[] = "333";
	char	die[] = "1010101010";
	char	cin[] = "50505050505050505050505050505050505050505050505050";
	char	zer[0];
	char	one[1];
	char	two[2];
	char	thr[3];
	char	ten[10];
	char	fif[50];
	int		countTrue;
	int		countMine;

	printf("\033[30;48;5;9m*** FT_STRLEN ***\033[0m\n");
	printf("\033[30;48;5;178m*** DEFINED 1 ***\033[0m\n");
	printf("|%s|\n", uno);
	countTrue = 0;
	countTrue = strlen(uno);
	printf("strlen: count[uno] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(uno);
	printf("ft_strlen: count[uno] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** DEFINED 2 ***\033[0m\n");
	printf("|%s|\n", dos);
	countTrue = 0;
	countTrue = strlen(dos);
	printf("strlen: count[dos] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(dos);
	printf("ft_strlen: count[dos] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** DEFINED 3 ***\033[0m\n");
	printf("|%s|\n", tre);
	countTrue = 0;
	countTrue = strlen(tre);
	printf("strlen: count[tre] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(tre);
	printf("ft_strlen: count[tre] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** DEFINED 10 ***\033[0m\n");
	printf("|%s|\n", die);
	countTrue = 0;
	countTrue = strlen(die);
	printf("strlen: count[die] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(die);
	printf("ft_strlen: count[die] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** DEFINED 50 ***\033[0m\n");
	printf("|%s|\n", cin);
	countTrue = 0;
	countTrue = strlen(cin);
	printf("strlen: count[cin] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(cin);
	printf("ft_strlen: count[cin] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** UNDEFINED 0 ***\033[0m\n");
	printf("|%s|\n", zer);
	countTrue = 0;
	countTrue = strlen(zer);
	printf("strlen: count[zer] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(zer);
	printf("ft_strlen: count[zer] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** UNDEFINED 1 ***\033[0m\n");
	printf("|%s|\n", one);
	countTrue = 0;
	countTrue = strlen(one);
	printf("strlen: count[one] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(one);
	printf("ft_strlen: count[one] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** UNDEFINED 2 ***\033[0m\n");
	printf("|%s|\n", two);
	countTrue = 0;
	countTrue = strlen(two);
	printf("strlen: count[two] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(two);
	printf("ft_strlen: count[two] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** UNDEFINED 3 ***\033[0m\n");
	printf("|%s|\n", thr);
	countTrue = 0;
	countTrue = strlen(thr);
	printf("strlen: count[thr] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(thr);
	printf("ft_strlen: count[thr] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** UNDEFINED 10 ***\033[0m\n");
	printf("|%s|\n", ten);
	countTrue = 0;
	countTrue = strlen(ten);
	printf("strlen: count[ten] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(ten);
	printf("ft_strlen: count[ten] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");



	printf("\033[30;48;5;178m*** UNDEFINED 50 ***\033[0m\n");
	printf("|%s|\n", fif);
	countTrue = 0;
	countTrue = strlen(fif);
	printf("strlen: count[fif] =    %d\n", countTrue);

	countMine = 0;
	countMine = ft_strlen(fif);
	printf("ft_strlen: count[fif] = %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n\n");
	****************************/


	/*********** WRITE ***********
	int	countTrue;
	int	countMine;
	int	tmp;

	printf("\033[30;48;5;9m**** FT_WRITE ***\033[0m\n");
	printf("\033[30;48;5;178m*** DEFINED 0 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "", 0);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "", 0);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m*** DEFINED 1 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "1", 1);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "1", 1);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m*** DEFINED 2 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "22", 2);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "22", 2);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);
	


	printf("\033[30;48;5;178m*** DEFINED 3 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "333", 3);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "333", 3);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m*** DEFINED 10 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "1010101010", 10);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "1010101010", 10);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);



	
	printf("\033[30;48;5;178m*** DEFINED 50 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "50505050505050505050505050505050505050505050505050", 50);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "50505050505050505050505050505050505050505050505050", 50);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);



	printf("\033[30;48;5;178m*** UNDEFINED 5 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "", 5);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "", 5);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);



	
	printf("\033[30;48;5;178m*** UNDEFINED 10 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "1", 10);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "1", 10);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m*** UNDEFINED 15 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "22", 15);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "22", 15);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m*** UNDEFINED -5 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "333", -5);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = write(1, "333", -5);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m*** UNDEFINED -10 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(-1, "1", 1);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(-1, "1", 1);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);
	


	printf("\033[30;48;5;178m****** BAD_FD 0 ******\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(0, "22", 2);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(0, "22", 2);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);
	


	printf("\033[30;48;5;178m****** BAD_FD 2 ******\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(2, "333", 3);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(2, "333", 3);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m****** BAD_FD 3 ******\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(3, "1010101010", 10);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(3, "1010101010", 10);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);


	
	printf("\033[30;48;5;178m****** BAD_FD 4 ******\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(4, "50505050505050505050505050505050505050505050505050", 50);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(4, "50505050505050505050505050505050505050505050505050", 50);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);
	*****************************/

	char	buffer[10];
	char	temp[10];
	int		countTrue;
	int		countMine;

	errno = 0;
	countTrue = 0;
	countTrue = read(-5, buffer, 20);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countTrue = 0;
	countTrue = ft_read(-5, buffer, 20);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);
}
