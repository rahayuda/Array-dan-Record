#include <iostream.h>
#include <conio.h>

int array[2][3][4] =
{
{{10,11,12,13},{14,15,16,17},{18,19,20,21}},
{{20,21,22,23},{24,25,26,27},{28,29,30,31}}
};

void main()
{
	for(int b=0;b<2;b++)
   {
   	for(int ib=0;ib<3;ib++)
      {
      	for(int k=0;k<4;k++)
         {
   			cout<<array[b][ib][k]<<" ";
         }
         cout<<endl;
      }
      cout<<endl;
   }
	getch();
}