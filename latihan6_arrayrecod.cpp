#include <iostream>
using namespace std;

struct mahasiswa{
	int nim;
	string nama;
	string usia;
};

string kelas[3];

int main(){
for(int i=0; i < 3; i++){
	cout << "Masukan nama kelas : ";
	cin >> kelas[i];
	mahasiswa kelas[i][5];
	cout << "masukan data kelas " << kelas[i];
	for (int a = 0; a < 5; a++){
		cout << "NIM : ";
		cin >> kelas[i][a].nim;
		cout << "Nama Mahasiswa : ";
		cin >> kelas[i][a].nama;
		cout << "Usia : ";
		cin >> kelas[i][a].usia;
	}

	cout << kelas[i];
	cout << "Mahasiswa : " << endl;
	for (int y = 0; y < 5; y++){
		cout << kelas[i][y].nim;
		cout << kelas[i][y].nama;
		cout << kelas[i][y].usia;
	}
}

return 0;

}