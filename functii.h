#include "structuri.h"

// Pentru Problema 1

void citirePb1(Melodie m[], int& n) {
	ifstream f("melodii.txt");
	n = 0;
	while (!f.eof()) {
		Melodie melodie;
		f >> melodie.nume;
		f >> melodie.autor;
		f >> melodie.tara;
		f >> melodie.loc_top;
		f >> melodie.an_top;
		m[n] = melodie;
		n++;
	}
	f.close();
}

void afisareMelodiiTop3Romania(Melodie m[], int n) {
	Melodie loc1, loc2, loc3;
	for (int i = 0; i < n; i++) {
		if (m[i].tara == "Romania" && m[i].an_top == 2018 && m[i].loc_top < 4) {
			switch (m[i].loc_top)
			{
			case 1:
				loc1 = m[i];
				break;
			case 2:
				loc2 = m[i];
				break;
			case 3:
				loc3 = m[i];
				break;
			default:
				break;
			}
		}
	}
	loc1.afisareMelodie();
	loc2.afisareMelodie();
	loc3.afisareMelodie();
}

bool seModificaPozitia(string nume1, string nume2) {
	for (int i = 0; nume1[i] > 32 && nume1[i] < 127 && nume2[i] > 32 && nume2[i] < 127; i++) {
		if (nume1[i] > nume2[i]) {
			return true;
		}
		if (nume2[i] > nume1[i]) {
			return false;
		}
	}
	return false;
}

void sortareAlfabeticaNumeVectorMelodii(Melodie m2[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (seModificaPozitia(m2[i].nume, m2[i + 1].nume)) {
				Melodie aux = m2[i];
				m2[i] = m2[i + 1];
				m2[i + 1] = aux;
				flag = false;
			}
		}
	} while (flag == false);
}

void afisareMelodiiOrdonateAlfabetic(Melodie m[], int n) {
	Melodie m2[200];
	for (int i = 0; i < n; i++) {
		m2[i] = m[i];
	}
	sortareAlfabeticaNumeVectorMelodii(m2, n);
	for (int i = 0; i < n; i++) {
		m2[i].afisareMelodie();
	}
}

void sortareAlfabeticaTaraVectorMelodii(Melodie m2[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (m2[i].tara == m2[i + 1].tara &&  m2[i].loc_top > m2[i + 1].loc_top) {
				Melodie aux = m2[i];
				m2[i] = m2[i + 1];
				m2[i + 1] = aux;
				flag = false;
			}
			else if (seModificaPozitia(m2[i].tara, m2[i + 1].tara)) {
				Melodie aux = m2[i];
				m2[i] = m2[i + 1];
				m2[i + 1] = aux;
				flag = false;
			}
		}
	} while (flag == false);
}

void afisareMelodiiOrdonateAlfabeticTaraLoc(Melodie m[], int n) {
	Melodie m2[200];
	for (int i = 0; i < n; i++) {
		m2[i] = m[i];
	}
	sortareAlfabeticaTaraVectorMelodii(m2, n);
	for (int i = 0; i < n; i++) {
		m2[i].afisareMelodie();
	}
}

// Pentru Problema 2

void citirePb2(Medalie sp[], int& n) {
	ifstream f("medalii.txt");
	n = 0;
	while (!f.eof()) {
		Medalie medalie;
		f >> medalie.nume;
		f >> medalie.judet;
		f >> medalie.nume_medalie;
		f >> medalie.an;
		sp[n] = medalie;
		n++;
	}
	f.close();
}

void rezolvarePb2(Medalie sp[], int n, int& countAur, int& countArgint, int& countBronz) {
	countAur = 0, countArgint = 0, countBronz = 0;
	for (int i = 0; i < n; i++) {
		if (sp[i].an == 2019 && sp[i].judet == "Iasi") {
			if (sp[i].nume_medalie == "Aur") {
				countAur++;
			}
			else if (sp[i].nume_medalie == "Argint") {
				countArgint++;
			}
			else {
				countBronz++;
			}
		}
	}
}

// Pentru Problema 3

void citirePb3(Consultatie c[], int& n) {
	ifstream f("consultatii.txt");
	n = 0;
	while (!f.eof()) {
		Consultatie consultatie;
		Data data;

		f >> consultatie.pacient;
		f >> consultatie.cabinet;
		f >> data.zi;
		f >> data.luna;
		f >> data.an;
		consultatie.data_cons = data;

		c[n] = consultatie;
		n++;
	}
	f.close();
}

void rezolvarePb3(Consultatie c[], int n, int& count) {
	count = 0;
	for (int i = 0; i < n; i++) {
		Data data = c[i].data_cons;
		if (data.zi == 10, data.luna == 8, data.an == 2019) {
			count++;
		}
	}
}

// Pentru Problema 4

void citirePb4(Excursie e[], int& n) {
	ifstream f("excursii.txt");
	n = 0;
	while (!f.eof()) {
		Excursie excursie;
		Data data;
		f >> excursie.nume;
		f >> excursie.oras;
		f >> excursie.tara;
		f >> data.zi;
		f >> data.luna;
		f >> data.an;
		excursie.data_exc = data;

		e[n] = excursie;
		n++;
	}
	f.close();
}

void rezolvarePb4(Excursie e[], int n, string numed) {
	for (int i = 0; i < n; i++) {
		if (e[i].nume == numed) {
			cout << e[i].oras << " " << e[i].tara << endl;
		}
	}
}

// Pentru Problema 5

void citirePb5(Angajat a[], int& n) {
	ifstream f("angajati.txt");
	n = 0;
	while (!f.eof()) {
		Angajat angajat;
		f >> angajat.nume;
		f >> angajat.functie;
		f >> angajat.departament;
		f >> angajat.salariu_baza;
		f >> angajat.ora_sp;
		f >> angajat.nr_ore_sp;
		f >> angajat.total_sporuri;
		angajat.calculareSalariuObtinut();

		a[n] = angajat;
		n++;
	}
	f.close();
}

int salariuMaxProductie(Angajat a[], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].departament == "Productie") {
			if (a[i].salariu_obt > max) {
				max = a[i].salariu_obt;
			}
		}
	}
	return max;
}

int totalOreMarketing(Angajat a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].departament == "Marketing") {
			count += a[i].nr_ore_sp;
		}
	}
	return count;
}

// Pentru Problema 6

void citirePb6(Student st[], int& n) {
	ifstream f("studenti.txt");
	n = 0;
	while (!f.eof()) {
		Student student;
		f >> student.nume;
		f >> student.grupa;
		f >> student.an_studiu;
		f >> student.nr_credite;
		student.completareBursa();

		st[n] = student;
		n++;
	}
	f.close();
}

void afisareDateStudentiBursa(Student st[], int n) {
	for (int i = 0; i < n; i++) {
		if (st[i].bursa == "Da") {
			st[i].afisareDate();
		}
	}
}

// Pentru Problema 7

void citirePb7(StudentExaminare st[], int& n) {
	ifstream f("studenti-examinare.txt");
	n = 0;
	while (!f.eof()) {
		StudentExaminare student;
		f >> student.nume;
		f >> student.grupa;
		f >> student.m;
		for (int i = 0; i < student.m; i++) {
			f >> student.e[i].tip_examinare;
			f >> student.e[i].disciplina;
			f >> student.e[i].nr_credite;
		}
		f >> student.an_studiu;
		student.calculareNrTotalCredite();

		st[n] = student;
		n++;
	}
	f.close();
}

void afisareDateDacaCrediteProiecte(StudentExaminare st[], int n) {
	for (int i = 0; i < n; i++) {
		st[i].afisareDateStudentDacaAreCrediteLaProiecte();
	}
}

int nrTotalPunctajMaximStudenti(StudentExaminare st[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < st[i].m; j++) {
			if (st[i].e[j].nr_credite == 7) {
				count++;
			}
		}
	}
	return count;
}

// Pentru Problema 8

void citirePb8() {

}