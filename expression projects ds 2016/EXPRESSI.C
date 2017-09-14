#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"pcheck.c"
#include"operch.c"
#define gold "\x1b[33m"
#define white "\x1b[0m"
char exp[30];
void main()
{
	int status,i,m=0,j,k,h,count=0;
	int l;
	char t[30];
	clrscr();
	printf("\n\n                           EXPRESSION EVALUATION STATION\n\n    enter a mathematical expression and we will check if it is correct, for you                       and tell what is to be done\n\n");
	printf(gold"pressing enter twice will exit the program\n");
	printf(white":");
	label1:gets(exp);
       label9:for(j=0;exp[j]!='\0';j++)
	{
	if(exp[j]==' ')
	{
		printf("pls remove space and enter again\n:");
		goto label1;
	}
	}
	if(exp[0]=='\0')
	{
	 fflush(stdin);
	 count++;
	 printf("enter the expression to check\n:");
	 if(count==2)
		goto label5;
	else
		goto label1;
	}
	printf("\n");
       label2:status=pcheck(exp);
       if(status!=0)
       {
    for(l=0;l<10000;l++)
	{
	for(i=0;i<10000;i++)
	{
	}
	if(l%625==0)
	{
	printf("\r                                 ");
	printf("\roperator are being verified");
	if(m!=4)
		m++;
	else
		m=1;
	for(k=1;k<=m;k++)
	{
	printf(" ");
	}
	}
	}
	printf("\n");
       status=oper(exp);
       if(status!=0)
       {
       goto label1;
       }
	}
	else{
		goto label1;
	    }
	gets(t);
	if(t[0]=='\0')
	{
	label5:printf("(pressing enter will exit the program)\n:");
	gets(t);
	if(t[0]=='\0')
	{
	exit(0);
	}
	else
	{
	 strcpy(exp,t);
	 goto label9;
       }
       }
       strcpy(exp,t);
	goto label9;
}