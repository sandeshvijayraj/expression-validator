#include<stdio.h>
#include<conio.h>
#include<string.h>
int charcheck(char x)
   {
      if(isdigit(x))
     return 1;
      else if(x=='('||x==')'||x=='{'||x=='}')
      return 2;
      else if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^' || x=='%')
      return 3;
      else if(x=='=')
	return 4;
      if(isalpha(x)!=0)
	return 5;
      return 0;
    }