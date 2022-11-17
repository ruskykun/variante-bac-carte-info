#include "varianta-1-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Elev& e) {
	Data data;
	cout << "Introduceti numele : ";
	cin >> e.nume;
	cout << "Introduceti ziua nasterii : ";
	cin >> data.zi;
	cout << "Introduceti luna nasterii : ";
	cin >> data.luna;
	cout << "Introduceti anul nasterii : ";
	cin >> data.an;
	e.dn = data;
}

// Pentru Subiectul 3

// Problema 2

void citireSub3Pb2(int& n, int& m, int a[], int b[]) {
	ifstream f("varianta1subiectul3problema2.txt");
	f >> n, f >> m;
	for (int i = 0; i < n; i++) {
		f >> a[i];
	}
	for (int i = 0; i < m; i++) {
		f >> b[i];
	}
	f.close();
}

bool maiMicCaToate(int x, int m, int b[]) {
	for (int i = 0; i < m; i++) {
		if (x >= b[i]) {
			return false;
		}
	}
	return true;
}

int rezolvareSub3Pb2(int n, int m, int a[], int b[]) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (maiMicCaToate(a[i], m, b)) {
			count++;
		}
	}
	return count;
}

// Problema 3

void citireSub3Pb3(int x[], int& n) {
	ifstream f("varianta1subiectul3problema3.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

int primaCifra(int x) {
	while (x / 10 != 0) {
		x /= 10;
	}
	return x;
}

int aflareSecventaFazanMax(int x[], int n) {
	int max = 1;
	int c = 1;
	for (int i = 1; i < n; i++) {
		if (x[i - 1] % 10 == primaCifra(x[i])) {
			c++;
		}
		else {
			c = 1;
		}
		if (c > max) {
			max = c;
		}
	}
	return max;
}

