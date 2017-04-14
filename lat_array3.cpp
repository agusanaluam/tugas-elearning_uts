#include <iostream>
using namespace std;

int main(){
	string nama[3];

	cout << "Masukan nama : ";
	cin >> nama[0] ;
	cout << "Masukan nama : ";
	cin >> nama[1] ;
	cout << "Masukan nama : ";
	cin >> nama[2] ;
	
	cout << nama[0] << " - " << nama[1] << endl;
	cout << nama[0] << " - " << nama[2] << endl;
	cout << nama[1] << " - " << nama[2] << endl;
	return 0;
}