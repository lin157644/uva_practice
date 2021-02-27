#include <iostream>

using namespace std;

int g(int n)
{
	if(n>9){
		return n%10 + g(n/10);
	} else return n;
}


int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0) break;
		else {
			while(n>9)
			{
				n = g(n);
			}
			 cout << n << endl;
		}
	}
	
}