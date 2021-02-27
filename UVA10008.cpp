#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int n, max=0;
	int freq[26]={0};
	int ptr=0;
	char c;
	cin >> n;
	getchar();
	for(int lines=0; lines<n+1;)
	{
		c=getchar();
		if(c=='\n'||c==EOF){
		lines++;
		}
		//cout << c;
		if(isalpha(c)){
			if(islower(c)) c -= 'a';
			else c -= 'A';
			freq[c]++;
		}
	}
	
	bool maxExist=true;
	while(maxExist==true)
	{
		max=0;
		maxExist = false;
		for(int i=0; i<26; i++)
		{
			if(freq[i]!=0&&freq[i]>max){
				ptr = i;
				max = freq[i];
				maxExist = true;
			}
		}
		if(maxExist){
		cout << (char)(ptr+'A') << " " << freq[ptr] << endl;
		freq[ptr]=0;
		}
	}
	return 0;
	
}