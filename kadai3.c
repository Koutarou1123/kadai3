//GNU General Public License v3.0
/*Copyright(c)2022 Koutaro Murabayashi.All rights reserved.
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
char unko[256];
int i=0;
printf("256文字以上の文字は打たないでください\n");
scanf(" %s",unko);
while (1)
{
	if(unko[i]!='u'&& unko[i]!='n'&& unko[i]!='k'&& unko[i]!='o'){
		unko[i]=' ';
	}
	i++;
	if(unko[i]=='\0')break;
	
}
printf("%s\n",unko);
return 0;
}
