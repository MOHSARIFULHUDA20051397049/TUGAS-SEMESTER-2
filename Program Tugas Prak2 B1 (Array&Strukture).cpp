//m. sariful huda 20051397049 2020A MI//
// (1) ARRAY - Program membalik huruf 'P', 'E', 'N', 'S', 'I', 'T'//

#include <iostream>
using namespace std;

int main(){
	cout << "PROGRAM ARRAY MEMBALIK HURUF" << endl;
	cout << "============================\n" << endl;
	char a[6] = {'p', 'e', 'n', 's', 'i', 't'};
	int i, j;
	
	cout << "--Kata sebelum dibalik : --"<< endl;
	for (i=0; i<6; i++){
		cout << a [i];	
	}
	cout << "\n\n";
	cout << "--kata setelah dibalik : --"<< endl;
	for (j=6; j>=0; j--){
		cout << a [j];
	}
	return 0;
}
