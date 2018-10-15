#include <iostream.h>
#include <conio.h>

int array[2][4] = {{10,11,12,13},{14,15,16,17}};

void main()
{
	for(int b=0;b<2;b++)
   {
   	for(int k=0;k<4;k++)
      {
   		cout<<array[b][k]<<" ";
      }
      cout<<endl;
   }
	getch();
}