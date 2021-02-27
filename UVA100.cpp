#include <iostream>


using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b, n, ctr, max;
	while(scanf("%d%d", &a, &b)!=EOF)
	{
		max = 0;
		printf("%d %d ", a, b);
		if(a>b) swap(&a, &b);
		for(int i=a; i<=b; i++)
		{
			ctr = 0;
			n=i;
			while(n!=1)
			{
				if(n%2==1)
				{
					n = n*3+1;
					ctr++;
				}else{
					n /= 2;
					ctr++;
				}
			}
			if(ctr>=max) max=ctr;
		}
		printf("%d\n", max+1);
	}
	
	return 0;
}