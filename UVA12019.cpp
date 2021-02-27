#include <iostream>

using namespace std;

int main()
{
	int n, m, d;
	//int days[13]={0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int days[13]={0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	cin >> n;
	while(cin >> m >> d)
	{
		switch((days[m]+d)%7){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thursday\n");
				break;
		}
	}
}