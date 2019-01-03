#include <iostream>
using namespace std;

int main()

{
	int x,y,z;
	
	cout <<"---Program menentukan segitiga sama sisi---"<<endl;
	
	cout <<"\nMasukan sisi x = ";
	cin >>x;
	
	cout <<"\nMasukan sisi y = ";
	cin >>y;
	
	cout <<"\nMasukan sisi z = ";
	cin >>z;
	
	// script untuk mengetahui segitiga sama sisi by @Zulfikar

	if (x==y==z)
	{
		cout <<"\nSegitiga ini adalah segitiga sama sisi";
	}
	else
	{
		cout <<"\nSegitiga ini bukanlah segitiga sama sisi";
	}
}
