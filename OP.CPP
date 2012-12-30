#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
	int i=0;s=1;j=0;
	char c[30],b[30];
	clrscr();
	printf("enter text");
	gets(c);
	for(i=0;i<strlen(c);i++)
	{
		switch(s)
		{
			case 1: if(isalpha(c[i])||isdigit(c[i]))
				{
					s=2;
				}
				else
				s=3;break;
			case 2: if(isdigit(c[i])||isalpha(c[i]))
				{
					s=2;
				}
				else
				{
					b[j]=c[i];
					printf("%c",b[j]);j++;s=3;

				}
			case 3: if(isdigit(c[i]||isalpha(c[i]))
				s=2;
				else
				{
					b[j]=c[i];
					printf("%c",b[j]);
					j++;s=3;
				}break;
			}
	     getch();	}
	}
