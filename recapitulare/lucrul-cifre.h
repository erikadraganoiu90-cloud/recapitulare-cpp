#pragma once
#include <iostream>
using namespace std;

//functie are tip returnat nume si lista de parametriie



bool isCifreIdentice(int n) {
	int uc = n % 10;
	while (n > 0) {
		int cif = n % 10;
		if (cif != uc) {
			return false;
		}
		n = n / 10;
	}
	return true;
}

int contorCifre(int n) {

	int ct = 0;
	while (n > 0) {
		int cif = n % 10;
		n = n / 10;
		ct++;
	}
	return ct;
}
//

int  contorCifrePare(int n) {
	int ct = 0;
	while (n > 0) {
		int cif = n % 10;
		if (cif % 2 == 0) {
			ct++;
		} 
		n = n / 10;
	}
	return ct;
}

int  contorCifreImpare(int n) {
	
	return contorCifre(n)-contorCifrePare(n);
}

//todo:
void ex1() {
	int n = 0;
	cout << "n=" << endl;
	cin >> n;

	int pare = contorCifrePare(n);
	int impare = contorCifreImpare(n);
	int total = pare + impare;
	cout << "total=" << total<<endl;
	cout << "nr cifre pare=" << pare<<endl;
	cout << "nr cifre impare=" << impare;
}