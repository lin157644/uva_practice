#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
	char input[100][100]={'\0'};
	char output[100][100]={'\0'};
	char c;
	bool metchar;
	int lines=0, maxlen=0;
	//input
	for(int i=0; i<100; i++)
	{
		if(gets(input[i])!= NULL){
			if(strlen(input[i])>maxlen) maxlen=strlen(input[i]);
		}else{
			//+1 -1
			lines=i;
			break;
		}
		
	}
	
	//fill space
	for(int i=0; i<maxlen; i++)
	{
		metchar=false;
		for(int j=0; j<lines; j++)
		{
			if (input[j][i]!='\0') metchar = true;
			if (metchar == true&&input[j][i]=='\0') {
				input[j][i]=' ';
			}
		}
		
	}
	
	//transform
	for(int i=0; i<100; i++)
	{
		for(int j=0; j<100; j++)
		{
			output[j][99-i]=input[i][j];
		}
	}
	
	//output
	for(int i=0; i<maxlen; i++)
	{
		for(int j=100-lines; j<100; j++)
		{
			if(output[i][j]!='\0'){
				printf("%c", output[i][j]);
			}
		}
		puts("");
	}
	
}
