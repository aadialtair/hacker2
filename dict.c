#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(int argc,char ** argv)
{
  FILE* fp = fopen("mywords","r");
  char * word=argv[1];
  char s[128];
  while(fscanf(fp,"%s\n",s)==1)
  {
     if(strcmp(word,s)==0)
      {  
         printf("YES\n");
         return 0;
      }
  }
  printf("NO\n");
  return 0;
}  
