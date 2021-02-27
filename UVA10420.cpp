//Italy Germany France Turkey Spain
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	map<string, int > country={
		{"Italy", 0},
		{"Germany", 0},
		{"France", 0},
		{"Turkey", 0},
		{"Spain", 0}
	};
	for(int i=0; i<n; i++)
	{
		cin >> s;
		country[s]++;
		cin >> s >> s;
	}
	
	for (const auto& s : country) {
		if(s.second!=0) cout << s.first << " " << s.second << endl;
    }
}