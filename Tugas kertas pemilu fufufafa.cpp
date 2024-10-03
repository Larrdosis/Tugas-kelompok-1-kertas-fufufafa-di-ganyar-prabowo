#include <iostream>
using namespace std;

int main (){

int s, i;
s = 0, i =0;

do{
	
	cout << "Masukan jumlah kertas : " ;
	cin >> i ;
	s=s+i;
	
	if(i==10){
		cout << "Memasukan " << i << " kertas" << endl << endl;
			cout << "Jumlah kertas : " << s << endl;
		cout << "=============" << endl;
		


	}else{
		cout << "Kertas yang dimasukan kurang " << 10-i << endl;
		cout << "Coba Lagi!"  << endl << endl;
		s=s-i;

	}
	
	}while(s<50);
	cout << endl << "PENYIMPANAN KERTAS TELAH PENUH" ;
}
