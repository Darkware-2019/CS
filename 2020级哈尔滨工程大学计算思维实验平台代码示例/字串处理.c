#include<stdio.h>
#include<string.h>
int  main()
{
	char s1[255];
	char s2[255]; 
	int i,j;
	gets(s1);
	gets(s2);
	for(i = 0; i < strlen(s1); i++) {
		int flag = 0;
		for(j = 0; j < strlen(s2); j++) {
			
			if(s1[i] == s2[j]) {
				flag = 1;
				break;
			}	
		}
		if(flag == 0)
			printf("%c",s1[i]);
		
	}

	return 0;
}

