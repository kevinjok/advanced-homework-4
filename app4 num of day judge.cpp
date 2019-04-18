#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num_of_day[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
							{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year=0,month=0,day=0,sum=0;
	int i;

	printf("請輸入年份:");
	scanf("%d",&year);
	printf("請輸入月份:");
	scanf("%d",&month);
	printf("請輸入幾號:");
	scanf("%d",&day);
	
	for(i=0;i<month-1;i++)
	{

		if((year%4==0&&year%100!=0)||year%400==0)
		{

			sum+=num_of_day[1][i];

		}

		else{

			sum+=num_of_day[0][i];

		}
	} 

	sum+=day;                   
	printf("這是今年的第%d天",sum);

} 
