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

int ciframaxima(int n) {
  int max = 0;
   while (n > 0) {
	  int cif = n % 10;
	   if (cif > max) {
		   max = cif;
	   }
	   n = n / 10;
   }
   return max;
}

int ciframinima(int n) {
	int min = 10000;
	while (n > 0) {
		int cif = n % 10;
		if (cif < min) {
			min = cif;
		}
		n = n / 10;
	}
	return min;
}

void ex2() {
	int n;
	cout << "n=";
	cin >> n;
	int max = ciframaxima(n);
	int min = ciframinima(n);
	cout << "cea mai mare cifra=" << max<<endl;
	cout << "cea mai mica cifra=" << min;
}
//n 8459
//n!=0  uc   nou  p   n
// da   9    9    10  845
// da   5    59   100  84
// da   4    459  1000  8
// da   8    8459 10000 0
// nu

int eliminareaCifreiDeRangk(int n,int k) {
	//algoritm de parcurgere al unui numar in aceasi ordine 
	int  p = 1;
	int nou = 0;
	int ct = 0;
	while (n != 0) {
		int uc = n % 10;
		if (ct!=k) {
			nou = uc * p + nou;
			p = p * 10;
		}
		n = n / 10;
		ct++;
	}
	return nou;
}