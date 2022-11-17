#include "varianta-8-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Triunghi& t) {
	cout << "Introduceti masurile laturilor : " << endl;
	cout << "A : ";
	cin >> t.a;
	cout << "B : ";
	cin >> t.b;
	cout << "C : ";
	cin >> t.c;
}

bool isoscel(Triunghi t) {
	if ((t.a == t.b && t.b != t.c) || (t.c == t.b && t.b != t.a) || (t.a == t.c && t.c != t.b)) {
		return true;
	}
	return false;
}

// Pentru Subiectul 3

// Problema 2

bool patratPerfect(int x) {
	double nr = sqrt(x);
	if (nr == int(nr)) {
		return true;
	}
	return false;
}

int patrat(int n) {
	for (int i = n; i > 1; i--) {
		if (n % i == 0 && patratPerfect(i)) {
			return i;
		}
	}
	return 1;
}

// Problema 3

void citireSub3Pb3(int x[], int& n) {
	ifstream f("varianta8subiectul3problema3.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}