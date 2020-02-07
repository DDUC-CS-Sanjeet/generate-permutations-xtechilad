#include <bits/stdc++.h>
using namespace std;

void permute(char* set, int low, int size);
void swap( char *char1, char *char2);

int main()
{
	char list[4]={'a','b','c','d'};
	int length=strlen(list);
	permute(list,0,length-1);
	return 0;
}

void permute(char* set, int low, int size)
{
	if(low!=size)
	{
		for(int count=low;count<=size;count++)
		{
			swap((set+low),(set+count));
			permute(set,low+1,size);
			swap((set+low),(set+count));
		}
	}
	else
	{
		cout << set << "\n";
	}
}

void swap( char *char1, char *char2)
{
	char temp;
	temp=*char1;
	*char1=*char2;
	*char2=temp;
}
