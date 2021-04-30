include <stdio.h>
#include<conio.h>

void main()
{
  int a,i,facto;
  facto=1;
  clrscr();
  
  printf("Enter the number:");
  scanf("%d",&a);
  
  for(i=1;i<=a;i++)
  {
  facto=facto*i;
  }
  
  printf("Factorial is %d\n",facto);
  getch();
}
