#include <iostream>
using namespace std;

int main(){
	string nama[10];

	for( int i=0; i < 10; i++){
		cout << "Masukan nama : ";
		cin >> nama[i] ;	
	}
	
	for (int a = 0; a < 10; a++)
	{
		for (int x = 0; x < 10; x++)
		{
			cout << nama[a] << " - " << nama[x] << endl;
		}
	}
	
	return 0;
}