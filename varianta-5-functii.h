#include "varianta-5-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Punct x[], int& n) {
	ifstream f("varianta5subiectul2problema2.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n].x;
		f >> x[n].y;
		n++;
	}
	f.close();
}

// Pentru Subiectul 3

// Problema 2

int numarDivizori(int x) {
	int c = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			c++;
		}
	}
	return c;
}

bool estePrim(int x) {
	if (numarDivizori(x) == 2) {
		return true;
	}
	return false;
}

int divizori(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && estePrim(i)) {
			s += i;
		}
	}
	return s;
}

// Problema 3

// Utilizez aceleasi functii pentru
// numarul de divizori si numere prime
// ca la problema anterioara.

void citireSub3Pb3(int x[], int& n) {
	ifstream f("varianta5subiectul3problema3.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void eliminareElementSir(int x[], int& n, int indice) {
	for (int i = indice; i < n - 1; i++) {
		x[i] = x[i + 1];
	}
	n--;
}

void rezolvareSub3Pb3(int x[], int n, int& c) {
	c = 0;
	while (n > 0) {
		for (int i = 0; i < n; i++) {
			if (estePrim(x[i])) {
				eliminareElementSir(x, n, i);
				i--;
			}
			else {
				x[i]++;
			}
		}
		c++;
	}	
}