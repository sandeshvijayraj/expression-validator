#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"cc.c"
#define red "\x1b[31m"
#define white "\x1b[0m"
int oper(char *s)
{
   int l=0,k,xx=1,i,ol=1,flag=0,opst=0,lk=0;
   l=strlen(s);
   for(i=0;s[i]!='\0';i++)
{
 if(s[i]=='('||s[i]=='{')
 {
 if(s[i+1]==')'||s[i]=='}')
 {
 flag=1;
 printf("\nopening and closing paranthesis are place simultaneously check then first\n");
 for(k=0;s[k]!='\0';k++)
     {
     if(k==i+1 || k==i)
     {
     printf(red"%c",s[k]);
     }
     else printf(white"%c",s[k]);
     }
     printf("\n");
 }
}
}
if(charcheck(s[0])==3 || charcheck(s[0])==5)
{
for(k=0;s[k]!='\0';k++)
{
if(charcheck(s[k])==3 || charcheck(s[k])==5)
	opst++;
}
if(opst<2)
{
flag=1;
lk=1;
printf("this is not called an expression it should have atleast 2 operand\n");
for(k=0;s[k]!='\0';k++)
{
printf(red"%c",s[k]);
}
}
printf(white"");
if(charcheck(s[0])==5 && charcheck(s[1])=='\0' && lk!=1)
{
	printf("this is not called an expression it should have atlease two operand\n");
	flag=1;
	ol=0;
	printf(red"%c",s[0]);
}
printf(white"");
}
for(k=0;s[k]!='\0';k++)
{
if(!(isdigit(s[k])!=0))
{
	xx=0;
}
}
if(xx!=0 && ol!=0 && lk!=1)
{
printf("this is not called an expression it should have atlease two operand\n");
	flag=1;
	printf(red"%s",s);
}
   if(charcheck(s[0])==3 || s[0]=='=')
   {
   if(s[0]!='+')
   {
   if(s[0]!='-' && lk!=1)
   {
   label3:flag=1;
     printf(white"\nerror:this operator can't be at begining\n");
     for(k=0;s[k]!='\0';k++)
     {
     if(k==0)
     {
     printf(red"%c",s[k]);
     }
     else printf(white"%c",s[k]);
     }
     printf("\n");
     }
     else if(charcheck(s[1])!=1&& lk!=1)
		goto label3;
     }
     else if(charcheck(s[1])!=1&& lk!=1)
		goto label3;
   }

   if(charcheck(s[l-1])==3)
   {
     flag=1;
     printf(white"\nerror: operator can't be at end of expression\n");
     for(k=0;s[k]!='\0';k++)
     {
     if(k==l-1)
     {
     printf(red"%c",s[k]);
     }
     else printf(white"%c",s[k]);
     }
     printf("\n");
   }
   for(i=0;s[i]!='\0';i++)
   {
    if((charcheck(s[i])==3)&&(charcheck(s[i+1])==3))
    {
	flag=1;
	printf(white"\nerror:two operators cant be together \n");
	for(k=0;s[k]!='\0';k++)
	{
	if(k==i+1 || k==i)
	{
	printf(red"%c",s[k]);
	}
	else printf(white"%c",s[k]);
	}
	printf("\n");
	}
    if(charcheck(s[i])==3&&(s[i+1]=='}'|| s[i+1]==')'|| s[i+1]=='='))
    {
     printf(white"\nerror:an operand is missing after operator shown below\n");
     for(k=0;s[k]!='\0';k++)
     {
     if(k==i)
     {
     printf(red"%c",s[k]);
     }
     else printf(white"%c",s[k]);
     }
     flag=1;
     printf("\n");
     }
     if(charcheck(s[i])==0)
     {
     flag=1;
     printf("\noperator HIGHILITED is invalid\n");
     for(k=0;s[k]!='\0';k++)
     {
     if(k==i)
     {
     printf(red"%c",s[k]);
     }
     else printf(white"%c",s[k]);
     }
     printf("\n");
      }
      }
      if(s[l-1]=='=')
      {
      flag=1;
      printf("\nequalto(=) sign doesnt has rhs value assign it first\n");
      for(k=0;s[k]!='\0';k++)
      {
	if(k==l-1)
	printf(red"%c",s[k]);
	else printf(white"%c",s[k]);
      }
      }
    if(flag==0)
    {
    printf(white"\nit is a valid expression\n");
     }
     else
     printf(white"\ncheck them all and re-enter\n:");
     return flag;
 }