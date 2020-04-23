#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2;
	int *pnum1=&num1;
	int *pnum2=&num2;
	printf("enter two numbers\n");
	scanf("%d%d",pnum1,pnum2);
	printf("SUM OF TWO NUMBERS IS %d\n",(*pnum1+*pnum2));
	printf("DIFFERENCE OF TWO NUMBERS IS %d\n",(*pnum1-*pnum2));
	printf("MULTIPLICATION OF TWO NUMBERS IS %d\n",((*pnum1)*(*pnum2)));
	printf("DIVISION OF TWO NUMBERS IS %f\n",((*pnum1)/(*pnum2)));
	printf("MODULAS OF TWO NUMBERS IS %d\n",((*pnum1)%(*pnum2)));
}
