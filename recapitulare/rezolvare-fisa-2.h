#pragma once
#include <iostream>
using namespace std;

//Ex 1
int primaCifra(int n) { 
	while (n > 10) {
		 n = n / 10;
	}
	return n;
}

//Ex 2
int sumaCifrelor(int n) {
	int S = 0;
	while (n > 0) {
		int cif = n % 10;
		S = S + cif;
		n = n / 10;
	}
	return S;
}

//Ex 3
int produsulCifrelor(int n) {
	int P = 1;
	while (n > 0) {
		int cif = n % 10;
		P = P * cif;
		n = n / 10;
	}
	return P;
}

//Ex 4
int sumaCifrelorPare(int n) {
	int S = 0;
	while (n > 0) {
		int cif = n % 10;
		if (cif % 2 == 0) {
           S = S + cif;
		}
		n = n / 10;
	}
	return S;
}

//Ex5
bool apareCifra(int n,int x) {
	 
	while (n > 0) {
		int cif = n % 10;
		if (cif != x) {
			return false;
		}
		n = n / 10;
	}
	return true;
}

//Ex 6
int contorAparitie(int n,int x) {
	int ct = 0;
	while (n > 0) {
		int cif = n % 10;
		if (cif == x) {
			ct++;
		}
		n = n / 10;
	}
	return ct;
}

//Ex 7
int pozitieCifra(int n, int x) {
	 int ct = 0;
	while (n > 0) {
		int cif = n % 10;
		ct++;
		if (ct == x) {
			return cif;
		}
		n = n / 10;
	}
	if (ct < x) {
		int a = -1;
		return a;
	}
}

//Ex 8
int rasturnat(int n) {
	int r = 0;
	while (n > 0) {
		int cif = n % 10;
		r = r * 10 + cif;
		 n = n / 10;
	}
	
	return r;
}

//Ex 9
bool palindrom(int n) {
	int ogl = 0;
	int x = n;
	while (n > 0) {
		int cif = n % 10;
		ogl = ogl * 10 + cif;
		n = n / 10;
	}
	if (ogl == x) {
		return true;
	}
	else {
		return false;
	}
}

//Ex 10
bool repetareCifra(int n) {
	 
	int ct[10] = { 0 };
	while (n > 0) {
		int cif = n % 10;
		ct[cif]++;
		n = n / 10;
		if (ct[cif] != 1) {
			 return false;
		}
	}return true;
	 
		 
}

// Ex 11
bool cifCrescatoare(int n) {
	while (n > 0) {
		int cif = n % 10;
		n = n / 10;
		if (cif < n % 10) {
			return false;
		}
		
	}
	return true;
 }

//Ex 12
int alipire(int n, int m) {
	int p = 1;
	int m2 = m;
	while (m > 0) {
		m = m / 10;
		p = p * 10;
	}
	int x = n * p + m2;
	return x;
}

//Ex 13
int sumaPozImpr(int n) {
	int s = 0;
	int p = 1;
	while (n > 0) {
		int cif = n % 10;
		if (p % 2 != 0) {
			s = s + cif;
		}
		n = n / 10;
		p++;
	}
	return s;
}

//Ex 14
int alipirePrimaUltima(int n) {
	int uc = n % 10;
	while (n > 10) {
		n = n / 10;
	}
	int x = n * 10 + uc;
	return x;
}

//Ex 15
int ctCifDif(int n) {
	int ct[10] = { 0 };
	int ctc = 0;
	while (n > 0) {
		int cif = n % 10;
		ct[cif]++;
		n = n / 10;
	}
	int i = 1;
	while (i <= 9) {
		
		if (ct[i] != 0) {
			ctc++;
		}i++;
		}

	return ctc;
}

//Ex 16
int radacinaDigitala(int n) {
	int s = 0;
	while (n > 10) {
       while (n > 0) {
		int cif = n % 10;
		s = s + cif;
		n = n / 10;
	   }
     n = s;
	}
	if (n < 10) {
		return n;
	}
        return s;
	  
}

//Ex 17
int faraCifrePare(int n) {
	int p = 1;
	int x = 0;
	while (n > 0) {
		int cif = n % 10;
		if (cif % 2 != 0) {
			 x = cif * p + x;
			p = p * 10;
		}
		n = n / 10;
	}
	return x;
}

//Ex18
int cifreComune(int n, int m) {
	int ctn[10] = { 0 };
	int ctm[10] = { 0 };
	int cif;
	while (n > 0) {
		 cif = n % 10;
		ctn[cif]++;
		n = n / 10;
	}
	while (m > 0) {
		 cif = m % 10;
		ctm[cif]++;
			m = m / 10;
	}
	int i = 1;
	int ct = 0;
	while (i <= 10) {
		if (ctn[i] > 0 && ctm[i] > 0) {
			ct++;
		}
		i++;
	}
	return ct;
}

//Ex19
int nrMax(int n) {
	int ct[10] = { 0 };
	while (n > 0) {
		int cif = n % 10;
		ct[cif]++;
		n = n / 10;
	}
	int i = 9;
	int x = 0;
	while (i > 0) {
		if (ct[i] != 0) {
			x = i + x * 10;
		}
		i--;

	}
	return x;
}

 