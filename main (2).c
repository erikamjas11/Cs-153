#include <stdio.h>
#include <string.h>

char* reverse(char *p)
{ int len=strlen(p)-1;
  int i,j;
  char temp;
  for(i=0,j=len; i<len/2,j>len/2; i++,j--)
  { temp=p[i];
    p[i]=p[j];
    p[j]=temp;
  }
  return p;
}


char* rotateVowels(char *p)
{ int len=strlen(p)-1;
  int i;

  for(i=0; i<len; i++)
  { if(p[i]=='a') p[i]='e';
    else if(p[i]=='e')  p[i]='i';
    else if(p[i]=='i')  p[i]='o';
    else if(p[i]=='o')  p[i]='u';
    else if(p[i]=='u')  p[i]='y';
    else if(p[i]=='y')  p[i]='a';
    else if(p[i]=='A')  p[i]='E';
    else if(p[i]=='E')  p[i]='I';
    else if(p[i]=='I')  p[i]='O';
    else if(p[i]=='O')  p[i]='U';
    else if(p[i]=='U')  p[i]='Y';
    else if(p[i]=='Y')  p[i]='A';
  }
  return p;
}

int main(void)
{
  char buffer[256];
  printf("Enter a string: ");
  fgets(buffer,256,stdin);

  reverse(buffer);
  rotateVowels(buffer);
  printf("Encrypted:%s\n", buffer);

  return 0;
}
