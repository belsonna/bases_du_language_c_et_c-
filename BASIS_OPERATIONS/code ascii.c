#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
int c;

for(c=0;c<300;c++)
  {
	 if(c%15==0)
	 {
	    system("color f9");
		printf("\n");
	 }
	 putchar (c);
	 printf( "=%d\t",c);
  }
  printf("\x82");
	//system("PAUSE");
getch();
return 0;

}
