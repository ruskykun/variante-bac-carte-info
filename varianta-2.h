#include "varianta-2-functii.h"

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct punct {
//	int x;
//	int y;
// }
// struct poligon {
//	int nr_vf;
//	punct vf[20];
// }
// poligon p;
// 
// cin >> p.nr_vf;
// for(int i = 0; i < p.nr_vf; i++)
// ...............
//
// Scrie o secventa care citeste coordonatele
// varfurilor poligonului.
 
void subiectul2Problema2() {
	struct punct {
		int x;
		int y;
	};
	struct poligon {
		int nr_vf;
		punct vf[20];
	};

	poligon p;
	cout << "Introduceti numarul varfurilor : ";
	cin >> p.nr_vf;
	for (int i = 0; i < p.nr_vf ; i++) {
		cout << "Introduceti coordonata x a varfului " << i + 1 << " : ";
		cin >> p.vf[i].x;
		cout << "Introduceti coordonata y a varfului " << i + 1 << " : ";
		cin >> p.vf[i].y;
	}
}

// =============
// Subiectul III
// =============

// Problema 2
// Subprogramul numarare are doi parametri :
// a, prin care defineste un numar natural [2, 20000]
// b, prin care defineste un numar natural [2, 20000]
// Subprogramul returneaza numarul de valori din
// intervalul inchis determinat de a si b, care au
// exact 3 divizori.

void subiectul3Problema2() {
	int a, b;
	citireSub3Pb2(a, b);
	cout << "Numarul de numere din intervalul a, b care au 3 divizori este : " << numarare(a, b) << endl;
}

// Problema 3
// Din fisieraul bac.txt (varianta2subiectul3problema3.txt) se
// citesc n si m (0 < m < n < 1000000) de pe prima linie, apoi
// n numere naturale cu cel mult doua cifre fiecare a1, a2
// ... an, de pe a doua linie, apoi [...] (pentru m nr vector b)
// 
// Sa se determine cate siruri b se pot obtine din sirul a daca
// se poate schimba ordinea elementelor din sirul a. Se va afisa 
// pe ecran numarul de siruri obtinute.
// 
// Exemplu :
// 8 3
// 1 6 3 1 3 7 6 1
// 6 1 3
// Se va afisa : 2.

void subiectul3Problema3() {
	int n, m;
	int a[100], b[100];
	citireSub3Pb3(n, m, a, b);
	cout << "Numarul de siruri care se pot forma astfel este : " << nrSiruri(n, m, a, b) << endl;
} 