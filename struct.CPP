#include <iostream.h>
#include <conio.h>

struct{
	char nama[10];
	int umur;
   char alamat[20];
}mahasiswa;

struct{
	char nama[10];
	int umur;
   char alamat[20];
}dosen;

void main()
{
	cout<<"Nama: ";
   cin>>mahasiswa.nama;
   cout<<"Umur: ";
   cin>>mahasiswa.umur;
   cout<<"Alamat: ";
   cin>>mahasiswa.alamat;
   cout<<endl<<"Nama: ";
   cin>>dosen.nama;
   cout<<endl<<"Nama Mahasiswa: "<<mahasiswa.nama<<endl;
   cout<<"Umur: "<<mahasiswa.umur<<endl;
   cout<<"Alamat: "<<mahasiswa.alamat<<endl<<endl;
   cout<<"Nama Dosen: "<<dosen.nama;
	getch();
}
