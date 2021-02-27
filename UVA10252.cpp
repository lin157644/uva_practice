#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


int main()
{
	char c;
	int a[26]={0}, b[26]={0};
	int lines=0;
	
	while((c=getchar())!=EOF)
	{
		if(c==' ') puts("space");
		if(c=='\n'){
			lines++;
			if(lines==2) {
				//output
				//puts("output");
				for(int i=0; i<26; i++)
				{
					for(int j=0; j<min(a[i], b[i]); j++)
					{
						printf("%c", i+'a');
					}
				}
				puts("");
				//reset
				lines=0;
				for(int i=0; i<26; i++)
				{
					if(a[i]!=0) a[i]=0;
					if(b[i]!=0) b[i]=0;
				}
			}
		}else if(isalpha(c)){
			if(lines==0) a[c-'a']++;
			else b[c-'a']++;
		}
	}
	return 0;
}
