#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,s=1;
	clrscr();
	char data[300],op[300];
	printf(" enter data");
	gets(data);
	for(i=0;i<(strlen(data));i++)
	{
		switch(s)
		{
		   case 1:
			  if(data[i]=='i'||data[i]=='c'){
			  s=2;}
			  else{
			  printf("%c",data[i]);
			  }
			  break;
		   case 2:
			 if((data[i]=='n')||(data[i]=='h'&&data[i+1]=='a')){
			 s=3;}
			  else{
			  s=1;
			  printf("%c",data[i]);
			  }

			 break;
		   case 3: if(data[i]=='t'&&data[i+1]=='\0')
				printf("\nkeyword is int");
			   else if(data[i]=='r'&&data[i+1]=='\0')
				printf("\nkeywords is char");
				else{
				s=1;
			  op[i]=data[i];}
			  break;
		   }
		}
		
	    getch(); }