#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,base=0,tmp,dig,num1,num2,count;
		scanf("%d%d",&a,&b);
		tmp=a;
		while(tmp>0)
		{
			dig=tmp%10;
			if(dig>base)
			{
				base=dig;
			}
			tmp=tmp/10;
		}
		if((base)==9)
		{
			num1=a;
		}
		else
		{
			base=base+1;
			num1=0;
			tmp=a;
			count=0;
			while(tmp>0)
			{
				dig=tmp%10;
				num1+=(dig*pow(base,count));
				count++;
				tmp=tmp/10;
			}
		}
		
		tmp=b;
		base=0;
		while(tmp>0)
		{
			dig=tmp%10;
			if(dig>base)
			{
				base=dig;
			}
			tmp=tmp/10;
		}
		if((base)==9)
		{
			num2=b;
		}
		else
		{
			base=base+1;
			num2=0;
			tmp=b;
			count=0;
			while(tmp>0)
			{
				dig=tmp%10;
				num2+=(dig*pow(base,count));
				count++;
				tmp=tmp/10;
			}
		}
		printf("%d\n",num1+num2);
	}
return 0;
}
