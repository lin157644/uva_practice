#include <iostream>

using namespace std;

int main()
{
	int n;
	char c;
	bool quoted = false;
	while((c=getchar())!=EOF)
	{
		if(c=='\"') {
			if(quoted) {
				cout << "\'\'";
				quoted = false;
			}
			else {
				cout << "``";
				quoted = true;
			}
		} else {
			cout << c;
		}
	}
}