#include "varianta-7-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Punct& A, Punct& B) {
	cout << "Introduceti coordonatele primului punct :" << endl;
	cout << "X : ";
	cin >> A.x;
	cout << "Y : ";
	cin >> A.y;
	cout << "Introduceti coordonatele punctului secund :" << endl;
	cout << "X : ";
	cin >> B.x;
	cout << "Y : ";
	cin >> B.y;
}

bool seAflaPeAxe(Punct A, Punct B) {
	if ((A.x == 0 && B.x == 0) || (B.y == 0 && A.y == 0)) {
		return true;
	}
	return false;
}

// Pentru Subiectul 3

// Problema 2

void citireSub3Pb2(int a[], int& n, int& k) {
	ifstream f("varianta7subiectul3problema2.txt");
	f >> n, f >> k;
	for (int i = 0; i < n; i++) {
		f >> a[i];
	}
}

void outputSub3Pb2(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1) {
			cout << " ";
		}
	}
}

void permuta(int a[], int n, int k) {
	while (k > 0) {
		int r = a[n - 1];
		for (int i = n - 1; i > 0; i--) {
			a[i] = a[i - 1];
		}
		a[0] = r;
		k--;
	}
}

// Problema 3

void citireSub3Pb3(int x[], int& n) {
	ifstream f("varianta7subiectul3problema3in.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void sortare(int x[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (x[i] > x[i + 1]) {
				int r = x[i];
				x[i] = x[i + 1];
				x[i + 1] = r;
				flag = false;
			}
		}
	} while (flag == false);
}

void outputSub3Pb3(int a[], int n) {
	ofstream f("varianta7subiectul3problema3out.txt");
	for (int i = 0; i < n; i++) {
		f << a[i];
		if (i != n - 1) {
			f << " ";
		}
	}
	f.close();
}