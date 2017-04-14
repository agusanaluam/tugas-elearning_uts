#include <iostream>
using namespace std;

int main(){
	int index_arr;

	cout << "masukan index array : ";
	cin >> index_arr;

	string nama[index_arr];

	for( int i=0; i < index_arr; i++){
		cout << "Masukan nama : ";
		cin >> nama[i] ;	
	}
	
		for (int x = 0; x < index_arr; x++)
		{
			cout << nama[x] << " - " << nama[x+1] << endl;
		}
	
	
	return 0;
}