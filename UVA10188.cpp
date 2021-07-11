#include <iostream>
#include <cstring>


using namespace std;

int main()
{
	string stdsol, ans, input;
	int n, m, y=0, run=1;
	while(cin>>n&&n)
	{
		cin.ignore();
		y=0;
		stdsol = "";
		ans = "";
		for(int i=0; i<n; i++)
		{
			getline(cin, input);
			if(i){
				stdsol += '\n';
				stdsol += input;
			} else {
				stdsol = input;
			}
			y += input.length();
		}
		
		cin >> m;
		cin.ignore();
		for(int i=0; i<m; i++)
		{
			getline(cin, input);
			if(i){
				ans += '\n';
				ans += input;
			} else {
				ans = input;
			}
		}
		
		if(ans==stdsol){
			cout << "Run #" << run << ": Accepted " << y << endl;
			run++;
		} else {
			for(int i=0; i<stdsol.length(); i++)
			{
				if(stdsol[i]==' '||stdsol[i]=='\n'){
					stdsol.erase(i,1);
					i--;
				}
			}
			for(int i=0; i<stdsol.length(); i++)
			{
				if(ans[i]==' '||ans[i]=='\n'){
					ans.erase(i,1);
					i--;
				}
			}
			if(ans==stdsol){
				cout << "Run #" << run << ": Presentation Error " << y << endl;
				run++;
			} else {
				cout << "Run #" << run << ": Wrong Answer " << y << endl;
				run++;
			}
		}
		//cout << stdsol << endl << ans;
	}
	return 0;
}
