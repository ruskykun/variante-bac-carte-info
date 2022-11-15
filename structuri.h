#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Melodie {
	string nume;
	string autor;
	string tara;
	int loc_top;
	int an_top;

	void afisareMelodie() {
		cout << nume << " " << autor << " " << tara << " " << loc_top << " " << an_top << endl;
	}
};

struct Medalie {
	string nume;
	string judet;
	string nume_medalie;
	int an;
};

struct Data {
	int zi;
	int luna;
	int an;
};

struct Consultatie {
	string pacient;
	string cabinet;
	Data data_cons;
};

struct Excursie {
	string nume;
	string oras;
	string tara;
	Data data_exc;
};

struct Angajat {
	string nume;
	string functie;
	string departament;
	int salariu_baza;
	int ora_sp;
	int nr_ore_sp;
	int total_sporuri;
	int salariu_obt;

	void calculareSalariuObtinut() {
		salariu_obt = salariu_baza + salariu_baza * total_sporuri / 100 + ora_sp * nr_ore_sp;
	}
};

struct Student {
	string nume;
	string grupa;
	string bursa;
	int an_studiu;
	int nr_credite;

	void completareBursa() {
		if (nr_credite >= 30) {
			bursa = "Da";
		}
		else {
			bursa = "Nu";
		}
	}

	void afisareDate() {
		cout << nume << " " << grupa << " " << an_studiu << endl;
	}
};

struct Examinare {
	string tip_examinare;
	string disciplina;
	int nr_credite;
};

struct StudentExaminare {
	string nume;
	string grupa;
	Examinare e[10];
	int m;
	int an_studiu;
	int nr_total_credite;

	void calculareNrTotalCredite() {
		nr_total_credite = 0;
		for (int i = 0; i < m; i++) {
			nr_total_credite += e[i].nr_credite;
		}
	}

	void afisareDateStudentDacaAreCrediteLaProiecte() {
		for (int i = 0; i < m; i++) {
			if (e[i].tip_examinare == "proiect" && e[i].nr_credite > 0) {
				cout << nume << " " << an_studiu << " " << grupa << " " << e[i].disciplina << endl;
			}
		}
	}
};

struct Spectacol {
	string denumire;
	string autor;
	Data data_sp;
	int nr_bilete;
	int pret;
};