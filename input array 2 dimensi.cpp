#include <iostream.h>
#include <conio.h>

int array[2][4];

void main()
{
	for(int b=0;b<2;b++)
   {
   	for(int k=0;k<4;k++)
      {
   	cout<<"Input Array "<<b<<","<<k<<": ";
      cin>>array[b][k];
      }
   }
   cout<<endl;
   cout<<"Array Dimensi 2:";
   cout<<endl<<endl;
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