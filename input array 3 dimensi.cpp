#include <iostream.h>
#include <conio.h>

int array[2][3][4];

void main()
{
	for(int b=0;b<2;b++)
   {
   	for(int i=0;i<3;i++)
      {
      	for(int k=0;k<4;k++)
         {
   		cout<<"Input Array "<<b<<","<<i<<","<<k<<": ";
      	cin>>array[b][i][k];
         }
      }
   }
   cout<<endl;
   cout<<"Array Dimensi 3:";
   cout<<endl<<endl;
	for(int b=0;b<2;b++)
   {
   	for(int i=0;i<3;i++)
      {
      	for(int k=0;k<4;k++)
         {
      	cout<<array[b][i][k]<<" ";
         }
         cout<<endl;
      }
      cout<<endl;
   }
	getch();
}