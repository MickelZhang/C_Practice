/*利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。
输入格式
输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
输出n行，每个m个字符，为你的图形*/


#include<stdio.h>
#define N 10

int main()
{
	int n = 0;
	int m = 0;
	char arr[N][N] = { 0 };
	int i = 0;
	int j = 0;
	char c = 0;

	scanf_s("%d%d", &n, &m);

	for (i = 0; i < n; i++)
	{
		c = 'A';
		for (j = i; j < m; j++)
		{
			arr[i][j] = c++;
		}

		c = 'A';
		for (j = i - 1; j >= 0; j--)
		{
			arr[i][j] = ++c;
		}
	}


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}