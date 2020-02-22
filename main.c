#include <stdio.h>
#define N 5
#define M 6


int main() {
	/*char a = 1;
	short b = 1;
	int c = 1;*/
	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int)); 
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));*/
	//2

	int s[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			s[i][j] = 0;
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	//3
	int s[5][5];
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			s[i][j] = 0;
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	
	/*int abc;
	printf("%d ", abc);
	getchar();*/
