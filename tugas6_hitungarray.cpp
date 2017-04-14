#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
	char Kata[5];
    char karakter = 'a';
    int Jml_karakter = 0;
	int ttl_karakter = 0;
int main()
{
    
	for(int x=0; x < 5; x++){
		cout<<"Masukkan karakter : ";
		gets(Kata);
		for (int i = 0; i <= strlen(Kata); i++)
		{
			if (Kata[i] == karakter)
			{
				Jml_karakter++;
			}
		}
	}
    cout<<"Jumlah karakater A "<<"ada ( "<<Jml_karakter<<" ) buah";

    return 0;
}

