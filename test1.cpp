#include <stdio.h>
int main()
{
	int count=0,n;
	printf("Please enter number:");
	scanf("%d",&n);		//输入任意数值
	while(n!=1)
	{
		if(n%2==0)
		{
			n=/2;	//若为偶数除以2
			printf("[%d]:%d/2=%d",++count,n*2,n);
		}
		else
		{
			n=n*3+1;	//若为奇数乘以3加1
			printf("[%d]:%d*3+1=%d",+count++,(n-1)/3,n);
		}
	}
}

