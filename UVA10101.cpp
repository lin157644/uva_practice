#include <iostream>

using namespace std;

void gangla(long long n)
{
	if(n>=10000000){
		gangla(n/10000000);
		printf(" kuti");
		n%=10000000;
	}
	if(n>=100000){
	    gangla(n/100000);
		printf(" lakh");
		n%=100000;
	}
	if(n>=1000){
		gangla(n/1000);
		printf(" hajar");
		n%=1000;
	}
	if(n>=100){
		gangla(n/100);
		printf(" shata");
		n%=100;
	}
	if(n!=0) printf(" %d", n);
}

int main()
{
	int no=1;
	long long n;
	while(scanf("%lld", &n)!=EOF)
	{
		printf("%4d.", no);
		if(n==0) cout << ' ' << 0;
		else gangla(n);
		printf("\n");
		no++;
	}
	
}