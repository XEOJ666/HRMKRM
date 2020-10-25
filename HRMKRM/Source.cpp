#include<stdio.h>
void AA(int*);
void BB(int*);
void getIntA(int*);
void getIntB(int*);
int main() 
{
	int A[10], B[10];
	int* pA = A;
	int* pB = B;
	getIntA(pA);
	getIntB(pB);
	AA(pA);
	BB(pB);
}
void AA(int* pA)
{
	if (*pA >= 0 && *pA <= 10)
	{
		int sum = 0;
		sum = *pA * 2;
		printf("%d ", sum);
	}
	else
	{
		printf("Error ");
	}
}
void BB(int* pB)
{
	if (*pB > 0 && *pB <= 10)
	{
		int sum = 0;
		sum = *pB * 3;
		printf("%d", sum);
	}
	else
	{
		printf("Error");
	}
}
void getIntA(int* Px)
{
	scanf_s("%d", Px);
}
void getIntB(int* Py)
{
	scanf_s("%d", Py);
}