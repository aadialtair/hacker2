#include<stdio.h>
#include<string.h>
char to_upper(char );
char to_lower(char a);
int main()
{
  char s[200];
  printf("Enter the string \n");
  scanf("%[^\n]s",s);
  printf("your string : %s\n",s);
  int i=0;
  int j=0;
  while(s[j]!='\0')
  {
    if((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122))
    {
       if(i%2==0)
       {  
          if(!(s[j]>=65&&s[j]<=90))
             s[j]=to_upper(s[j]);
       }
       else
       {
           if(!(s[j]>=97&&s[j]<=122))
              s[j]=to_lower(s[j]);
       }
       i++;
     }
    
    j++;
    
  }  
  printf("your string : %s\n",s);
  return 0;
} 
char to_upper(char a)
{
   a= a-32;
   return a;
} 
char to_lower(char a)
{
   a= a+32;
   return a;
} 
   

