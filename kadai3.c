"""
GNU General Public License v3.0
"""
#include<stdio.h>
#include<stdlib.h>

char unko[];
int i=0;

int main()
{
scanf("%s",unko);
while (1){
	if(unko[i]!='u'&& unko[i]!='n'&& unko[i]!='k'&& unko[i]!='o'){
		unko[i]=' ';
	}
	i++;
	if(unko[i]=='\0')break;
	
}
printf("%s\n",unko);
return 0;
}
