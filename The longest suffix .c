#include <stdio.h>
int main()
{   
     char a[100]; char b[100];char c[100];
    int i,j,k,l; 
    for(l=0;l<100;l++)
    {
	 a[l]='\0';b[l]='\0';c[l]='\0';
	}
	gets(a);gets(b);	
	for (i=99;i>=0&&b[i]=='\0';i--)
	   continue;
	for(j=99;j>=0&&a[j]=='\0';j--)
	  continue;
	while(a[j]==b[i]&&j>=0&&i>=0)  
	{
		c[k]=a[j];
		k++;
		j--;
		i--;
	}
   if(c[0]=='\0')
   printf("null");
   else 
   { 
      for(i=99;i>=0;i--)
      if (c[i]!='\0')
      printf("%c",c[i]);
   }
	return 0;
}

