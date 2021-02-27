#include <iostream>

using namespace std;

int main()
{
	int a=0;
	int b=0;
	char c;
	bool isOdd=true;
	c=getchar();
	while(true)
	{
		if(c=='\n'){
			
			if(b>a){
				a^=b;
				b^=a;
				a^=b;
			}
			if((a-b)%11) printf(" is not a multiple of 11.\n");
			else printf(" is a multiple of 11.\n");
			a = 0;
			b = 0;
			c=getchar();
			if(c=='0') break;
			continue;
		}
		c -= '0';
		if(isOdd){
			a += c;
			isOdd = false;
		}else{
			b += c;
			isOdd = true;
		}
		printf("%d", c);
		c=getchar();
	}
	
	return 0;
}