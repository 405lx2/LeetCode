#include "stdafx.h"

using namespace std;

char  findChar(char str[])
{
	if (str==NULL)
		return 40;
	char * head=str;
	int Count[128];
	for(int i=0;i<128;i++)
	{
		Count[i] = 0;
	}
	int index;
	char *Table=(char*)malloc(100*sizeof(char));
	while (head!= '\0')
	{
		index = (*head - 40);	

		Count[index]++;
		if (Count[index]==1)
		{
			strcat(Table,head);
		}
		head++;
		
	}
	//strcat(Table, '\0');
	char * t = Table;

	while(t!='\0')
	{
		if (Count[(*t-40)]==1)
		{
			return *t;
		}
	}
	
}

//int main()
//{
//	char *str = (char*)malloc(sizeof(char) * 100);
//	const char*  str0 = "aabccdeeefggh";
//	/*str=strcat(str, "aabccdeeefggh");*/
//	 
//	
//	char result=findChar(str);
//	printf("%s", str);
//	return 0;
//}
