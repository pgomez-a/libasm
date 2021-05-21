#include "libasm.h"
#include <stdio.h>

/********** STRLEN **********/
static void	call_strlen_test(void)
{
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
}

/*********** STRCPY ***********/
static void	call_strcpy_test(void)
{
	char	dst[10];
	char	*output;

	printf("\033[30;48;5;9m***** FT_STRCPY ****\033[0m\n");
	printf("\033[30;48;5;178m***** 10 <-- 0 *****\033[0m\n");
	bzero(dst, 10);
	output = NULL;
	output = strcpy(dst, "");
	printf("strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);

	bzero(dst, 10);
	output = NULL;
	output = ft_strcpy(dst, "");
	printf("ft_strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);

	

	printf("\033[30;48;5;178m*** 10 <-- 1 ***\033[0m\n");
	bzero(dst, 10);
	output = NULL;
	output = strcpy(dst, "1");
	printf("strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);

	bzero(dst, 10);
	output = NULL;
	output = ft_strcpy(dst, "1");
	printf("ft_strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);



	printf("\033[30;48;5;178m*** 10 <-- 2 ***\033[0m\n");
	bzero(dst, 10);
	output = NULL;
	output = strcpy(dst, "22");
	printf("strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);

	bzero(dst, 10);
	output = NULL;
	output = ft_strcpy(dst, "22");
	printf("ft_strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);



	printf("\033[30;48;5;178m*** 10 <-- 5 ***\033[0m\n");
	bzero(dst, 10);
	output = NULL;
	output = strcpy(dst, "55555");
	printf("strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);

	bzero(dst, 10);
	output = NULL;
	output = ft_strcpy(dst, "55555");
	printf("ft_strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);



	printf("\033[30;48;5;178m*** 10 <-- 9 ***\033[0m\n");
	bzero(dst, 10);
	output = NULL;
	output = strcpy(dst, "999999999");
	printf("strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);

	bzero(dst, 10);
	output = NULL;
	output = ft_strcpy(dst, "999999999");
	printf("ft_strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);
	


	printf("\033[30;48;5;178m*** str <-- str ***\033[0m\n");
	char	src[] = "adios";

	bzero(dst, 10);
	output = NULL;
	printf("src: %p\n", src);
	printf("dst: %p\n", dst);
	printf("output: %p\n", output);
	output = strcpy(dst, src);
	printf("strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);
	printf("src: %p\n", src);
	printf("dst: %p\n", dst);
	printf("output: %p\n\n\n", output);

	bzero(dst, 10);
	output = NULL;
	printf("src: %p\n", src);
	printf("dst: %p\n", dst);
	printf("output: %p\n", output);
	output = ft_strcpy(dst, src);
	printf("ft_strcpy --> %s\n", dst);
	printf("output --> %s\n\n", output);
	printf("src: %p\n", src);
	printf("dst: %p\n", dst);
	printf("output: %p\n", output);
}

/************ STRCMP ***********/
static void	call_strcmp_test(void)
{
	int	countTrue;
	int	countMine;

	printf("\033[30;48;5;9m***** FT_STRCMP ****\033[0m\n");
	printf("\033[30;48;5;178m*** hola == hola ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("hola", "hola");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("hola", "hola");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");




	printf("\033[30;48;5;178m*** largo == largo ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("estoesunacadenadecaracteresmuylargajejeje", "estoesunacadenadecaracteresmuylargajejeje");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("estoesunacadenadecaracteresmuylargajejeje", "estoesunacadenadecaracteresmuylargajejeje");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");




	printf("\033[30;48;5;178m*** e == e ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("ee", "ee");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("ee", "ee");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** "" == "" ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("", "");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("", "");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** a  != p ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("a", "p");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("a", "p");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** p  != a ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("p", "a");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("p", "a");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** aaa  != apa ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("aaa", "apa");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("aaa", "apa");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** apa  != aaa ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("apa", "aaa");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("apa", "aaa");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** aaa  != aab ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("aaa", "aab");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("aaa", "aab");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** aab  != aaa ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("aab", "aaa");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("aab", "aaa");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** estacadenaesigual  != estacadenanoesigual ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("estacadenaesigual", "estacadenanoesigual");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("estacadenaesigual", "estacadenanoesigual");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** estacadenanoesigual  != estacadenaesigual ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("estacadenanoesigual", "estacadenaesigual");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("estacadenanoesigual", "estacadenaesigual");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** aaaaa  != aaaaaaaaaa ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("aaaaa", "aaaaaaaaaa");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("aaaaa", "aaaaaaaaaa");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** aaaaaaaaaz  != aaaaa ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("aaaaaaaaaz", "aaaaa");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("aaaaaaaaaz", "aaaaa");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** aaaaaaaaaa  != aaaaz ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("aaaaaaaaaa", "aaaaz");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("aaaaaaaaaa", "aaaaz");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** 8912.762  != 8912$762 ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("8912.762", "8912$762");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("8912.762", "8912$762");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** \\xff\\xff == \\xff ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("\xff\xff", "\xff");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("\xff\xff", "\xff");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");



	printf("\033[30;48;5;178m*** hola == \"\" ***\033[0m\n");
	countTrue = 0;
	countTrue = strcmp("hola", "");
	printf("strcmp --> countTrue: %d\n", countTrue);

	countMine = 0;
	countMine = ft_strcmp("hola", "");
	printf("ft_strcmp --> countMine: %d\n", countMine);
	if (countTrue == countMine)
		printf("\033[92mOK\033[39m\n");
	else
		printf("\033[91mKO\033[39m\n");
	printf("\n");
}

/*********** WRITE ***********/
static void	call_strwrite_test(void)
{
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
	countTrue = write(1, "1010101010", 5);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "1010101010", 5);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);



	
	printf("\033[30;48;5;178m*** UNDEFINED 10 ***\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(1, "10101010101010101010", 10);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(1, "10101010101010101010", 10);
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


	
	printf("\033[30;48;5;178m****** BAD_FD -1 ******\033[0m\n");
	countTrue = 0;
	write(1, "write: |", 8);
	errno = 0;
	countTrue = write(-1, "50505050505050505050505050505050505050505050505050", 50);
	tmp = errno;
	write(1, "|\n", 2);
	printf("countTrue = %d\n", countTrue);
	printf("errno = %d\n\n", tmp);

	countMine = 0;
	ft_write(1, "ft_write: |", 11);
	errno = 0;
	countMine = ft_write(-1, "50505050505050505050505050505050505050505050505050", 50);
	tmp = errno;
	ft_write(1, "|\n", 2);
	printf("countMine = %d\n", countMine);
	printf("errno = %d\n\n", tmp);
}

/*********** READ ***********/
static void	call_strread_test(void)
{
	char	buffer[10];
	char	tmp[10];
	int		countTrue;
	int		countMine;

	printf("\033[30;48;5;9m**** FT_READ ***\033[0m\n");
	printf("\033[30;48;5;178m*** DEFINED 0 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(0, buffer, 5);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(0, tmp, 5);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** DEFINED 10 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(0, buffer, 10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(0, tmp, 10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** DEFINED -10 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(0, buffer, -10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(0, tmp, -10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** BAD_FD  -1 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(-1, buffer, 10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(-1, tmp, 10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** BAD_FD  1 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(1, buffer, 10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(1, tmp, 10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** BAD_FD  2 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(2, buffer, 10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(2, tmp, 10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** BAD_FD  3 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(-3, buffer, 10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(3, tmp, 10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);



	printf("\033[30;48;5;178m*** BAD_FD  4 ***\033[0m\n");
	errno = 0;
	countTrue = 0;
	write(1, "read: ", 6);
	countTrue = read(4, buffer, 10);
	printf("countTrue: %d\n", countTrue);
	printf("errno: %d\n", errno);

	errno = 0;
	countMine = 0;
	write(1, "ft_read: ", 9);
	countMine = ft_read(4, tmp, 10);
	printf("countMine: %d\n", countMine);
	printf("errno: %d\n\n", errno);
}

/*********** STRDUP ***********/
static void	call_strdup_test(void)
{
	char	*dst;

	printf("\033[30;48;5;9m***** FT_STRDUP ****\033[0m\n");
	printf("\033[30;48;5;178m******* hola *******\033[0m\n");
	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = strdup("Hola");
	printf("strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n", dst);
	free(dst);

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = ft_strdup("Hola");
	printf("ft_strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n\n", dst);
	free(dst);



	printf("\033[30;48;5;178m******* \"\" *******\033[0m\n");
	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = strdup("");
	printf("strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n", dst);
	free(dst);

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = ft_strdup("");
	printf("ft_strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n\n", dst);
	free(dst);



	printf("\033[30;48;5;178m******* . *******\033[0m\n");
	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = strdup(".");
	printf("strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n", dst);
	free(dst);

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = ft_strdup(".");
	printf("ft_strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n\n", dst);
	free(dst);



	printf("\033[30;48;5;178m******* src = novacio *******\033[0m\n");
	char	srcOne[] = "novacio";

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = strdup(srcOne);
	printf("strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n", dst);
	free(dst);

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = ft_strdup(srcOne);
	printf("ft_strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n\n", dst);
	free(dst);



	printf("\033[30;48;5;178m******* src = \"\" *******\033[0m\n");
	char	srcTwo[] = "";

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = strdup(srcTwo);
	printf("strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n", dst);
	free(dst);

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = ft_strdup(srcTwo);
	printf("ft_strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n\n", dst);
	free(dst);



	printf("\033[30;48;5;178m******* src[5] *******\033[0m\n");
	char	srcThree[5];

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = strdup(srcThree);
	printf("strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n", dst);
	free(dst);

	errno = 0;
	dst = NULL;
	printf("dst --> %p\n", dst);
	dst = ft_strdup(srcThree);
	printf("ft_strdup: %s\n", dst);
	printf("errno: %d\n", errno);
	printf("dst --> %p\n\n\n", dst);
	free(dst);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		call_strlen_test();
		call_strcpy_test();
		call_strcmp_test();
		call_strwrite_test();
		call_strread_test();
		call_strdup_test();
		return (0);
	}
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], "-len") == 0)
			call_strlen_test();
		else if (ft_strcmp(argv[1], "-cpy") == 0)
			call_strcpy_test();
		else if (ft_strcmp(argv[1], "-cmp") == 0)
			call_strcmp_test();
		else if (ft_strcmp(argv[1], "-wrt") == 0)
			call_strwrite_test();
		else if (ft_strcmp(argv[1], "-red") == 0)
			call_strread_test();
		else if (ft_strcmp(argv[1], "-dup") == 0)
			call_strdup_test();
		else
		{
			printf("\033[30;48;5;124m");
			printf("\033[39m");
			printf("Error, parámetro ->%s<- no válido\n",argv[1]);
			printf("\033[0m");
			return (1);
		}
		return (0);
	}
	printf("\033[30;48;5;124m");
	printf("\033[39m");
	printf("Error, solo se permite un parametro como maximo\n");
	printf("\033[0m");
}
