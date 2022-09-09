#include <iostream>
using namespace std;

int main () {
	const float phi = 3.14;
	float L, r;
	
	//value r
	cout<<"masukkan jari jari lingkaran :";
	cin>>r;
	r = 8;
	
	//proses perhitungan 
	L = phi * r * r;
	
	//hasilnya
	cout<<"luas lingkaran dengan jari-jari "<<r<<" cm "<<" adalah ";
	cout<<L<<"cm2";
	
	
	
}
