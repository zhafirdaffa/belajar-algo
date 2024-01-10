#include <iostream>

using namespace std;

void luaspersegi(){
	float luasp, s;
	
	cout << "Luas Persegi" << endl;
	
	cout << "Masukan Sisi Persegi: ";
	cin >> s;
	
	luasp = s * s;
	
	cout << "Luas Persegi Adalah : " << luasp << endl;
	
}
	
	void luaslingkaran(){
	float luasl, r;
	
	cout << "Luas Lingkaran" << endl;
	
	cout << "Masukan Jari-Jari Lingkaran: ";
	cin >> r;
	
	luasl = 3.14 * r * r;
	 
	cout << " Luas Lingkaran Adalah : " << luasl << endl;
		
	}
         
		void luaspersegiP(){
		float luaspp, p, l;	
	
	cout << "Luas Persegi Panjang" << endl;
	
	cout << "Masukan Panjang Persegi: " << endl;
	cin >> p;
	
	cout << "Masukan Lebar Persegi: " << endl;
	cin >> l;
	
	luaspp = p * l;
	 
	cout << " Luas Persegi Panjang Adalah : " << luaspp << endl;
		}
              	
int main()
{
	
	int pilihan;
	
	
	void pilih();
	cout << "PILIH BANGUN DATAR" << endl;
	cout << "1.Luas Persegi" << endl;
	cout << "2.Luas lingkaran" << endl;
	cout << "3.Luas Persegi Panjang" << endl;
	cout << "Input Pilihan: ";
	cin >> pilihan;
	
	switch(pilihan){
	
	
	// Menghitungan luas persegi

	case 1:
	luaspersegi();
	break;
	 
	
	// Menghitung Luas Lingkaran
 
	case 2:
	luaslingkaran();
	break;
	
	
	// Menghitung Luas Persegi Panjang
	
	case 3:
	luaspersegiP();	
	break;
}
	return 0;
	 
}