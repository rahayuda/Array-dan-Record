#include <iostream.h>
#include <conio.h>

int array[4];

void main()
{
	for(int k=0;k<4;k++)
   {
   	cout<<"Input Array "<<k<<": ";
      cin>>array[k];
   }
	for(int p=0;p<4;p++)
   {
   	cout<<array[p]<<" ";
   }
	getch();
}