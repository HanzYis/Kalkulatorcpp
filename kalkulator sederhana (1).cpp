#include<iostream>
using namespace std;
int main()
{
	double a,b,hasil;
	int pilihan;
	cout<<"========================="<<endl;
	cout<<"=    by Farhan maulana  ="<<endl;
	cout<<"=  kalkulator sederhana ="<<endl;
	cout<<"========================="<<endl;
	cout<<"Silahkan pilih operasi bilangan"<<endl;
	cout<<"1. penjumlahan (+)"<<endl;
	cout<<"2. pengurangan (-)"<<endl;
	cout<<"3. perkalian (*)"<<endl;
	cout<<"4. pembagian (/)"<<endl;
	cout<<"Pilih :";
	cin>>pilihan;
	cout<<"Masukan nilai a = ";
	cin>>a;
	cout<<"Masukan nilai b = ";
	cin>>b;
	cout<<endl;
	if(pilihan == 1)
	{
		hasil = a+b;
	}
		else if(pilihan == 2)
		{
			hasil = a-b;
		}
		else if(pilihan == 3)
		{
			hasil = a*b;
		}
		else if(pilihan == 4)
		{
			hasil = a/b;
		}
		cout<<"Hasil = "<<hasil;
		cout<<endl;
}
