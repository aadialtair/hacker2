#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[])
{ 
  int a;
  //char word[30];
  if(argc!=2)
  {
    printf("invalid no of arguments\n");
    return 1;
  }
  FILE* fp;
  fp=fopen("sample","r");
  
  while((a=feof(fp))!=0)
  { 
    int i=0;
    char c=fgetc(fp);
    while(c==argv[1][i])
    {
      i++;
      c=fgetc(fp);
    }
    if(c==' '||c=='\n')
    {
      printf("yes,found\n");
      return 0;
    }
    if(i<strlen(argv[1]))
    {
      while(c!=' ')
      {
        c=fgetc(fp);
      }
     // c=fgetc(fp);      
    }
  }
  printf("not found\n");
  fclose(fp);
  return 0;
}    
