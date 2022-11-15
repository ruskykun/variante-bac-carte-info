#include "functii.h"

// PROBLEME DE LA CAP. 7 STRUCTURI NEOMOGENE

// Problema 1
// Se considera declararea urmatoare:
// struct melodie(Melodie in structuri.h)
//
// Structura melodie memoreaza numele si
// autorul melodiei, tara in care s-a lansat
// melodia, cel mai bunm loc ocupat in topuri
// din tara de lansare (loc_top) in anul
// precizat prin an_top.
// 
// Vectorul m[200] memoreaza datele pentru 
// 200 melodii.
// 
// a) Determinarea si afisarea melodiilor
// din Top 3 in Romania in anul 2018;
// 
// b) Afisarea melodiilor in ordine alfabetica
// dupa nume;
// 
// c) Afisarea melodiilor in ordine alfabetica
// dupa tara si pentru aceeasi tara in ordine
// crescatoare dupa loc_top.

void solutiePb1() {
	Melodie m[200];
	int n;
	citirePb1(m, n);
	cout << "Punctul a)" << endl << endl;
	cout << "Melodiile din Top 3 - Romania anul 2018 sunt :" << endl;
	afisareMelodiiTop3Romania(m, n);
	cout << endl << "Punctul b)" << endl << endl;
	cout << "Melodiile ordonate alfabetic dupa nume sunt :" << endl;
	afisareMelodiiOrdonateAlfabetic(m, n);
	cout << endl << "Punctul c)" << endl << endl;
	cout << "Melodiile ordonate alfabetic dupa tara si crescator dupa locul in top sunt :" << endl;
	afisareMelodiiOrdonateAlfabeticTaraLoc(m, n);
}

// Problema 2
// Se considera declararea urmatoare :
// struct medalie(Medalie in structuri.h)
//
// Structura medalie memoreaza numele si judetul
// unui sportiv ce a obtinut medalie la o competitie.
// Campul medalie reprezinta denumirea medaliei (are una
// dintre valorile aur, argint, bronz). Campul an indica
// anul competitiei. Vectorul sp memoreaza datele
// pentru 500 de sportivi.
//
// Scrie o secventa [...] contine declaratii de
// variabile si instructiuni pentru determinarea
// si afisarea numarului de medalii de aur, nr.
// de medalii de argint si a nr. de medalii de
// bronz obtinute de sportivii din Judetul
// Iasi in anul 2019.

void solutiePb2() {
	Medalie sp[500];
	int n, countAur, countArgint, countBronz;
	citirePb2(sp, n);
	rezolvarePb2(sp, n, countAur, countArgint, countBronz);
	cout << "Numarul de medalii de aur din Iasi 2019 : " << countAur << endl;
	cout << "Numarul de medalii de argint din Iasi 2019 : " << countArgint << endl;
	cout << "Numarul de medalii de bronz din Iasi 2019 : " << countBronz << endl;
}

// Problema 3
// Se considera declararile urmatoare:
// struct data(Data in structuri.h);
// struct consultatie(Consultatie in structuri.h)
//
// Structura data memoreaza o data calendaristica.
// Structura consultatie memoreaza numele unui
// pacient, cabinetul la care este programat pentru
// consultatie si data programata a consultatiei.
// 
// Vectorul c memoreaza datele pentru 100 consultatii.
// Scrie [...] determinarea si afisarea numerelor
// pacientilor programati pentru consultatii la
// cabinetul de stomatologie la data de 10 august
// 2019 si a numarului de pacienti programati
// la aceasta data.

void solutiePb3() {
	Consultatie c[100];
	int n, count;
	citirePb3(c, n);
	rezolvarePb3(c, n, count);
	cout << "Numarul de pacienti programati pe 10.08.2019 este : " << count << endl;
}

// Problema 4
// Se considera urmatoarea declaratie:
// struct data(Data in structuri.h);
// struct excursie(Excursie in structuri.h)
// 
// Structura data memoreaza o data calendaristica.
// Structura excursie memoreaza numele persoanei
// inscrise pentru excursie, tara si orasul de
// destinatie al excursiei si data de plecare
// in excursie (data_exc).
// Vectorul e memoreaza datele pentru 300
// de persoane inscrise. 
// Variabila numed reprezinta numele unei
// persoane.
// 
// Scrie [...] determinarea si afisarea destinatiei
// si a datei pentru fiecare dintre excursiile la
// care s-a inscris "numed" sau se va afisa
// mesajul "Nicio excursie", daca persoana nu
// s-a inscris la nicio excursie.

void solutiePb4() {
	Excursie e[300];
	int n;
	citirePb4(e, n);
	string numed = "George"; // Sa zicem ca e dat de problema.
	rezolvarePb4(e, n, numed);
}

// Problema 5
// Se considera urmatoarea declaratie:
// struct angajat(Angajat in structuri.h)
// 
// Structura angajat memoreaza numele, functia indeplinita,
// departamentul in care lucreaza, salariul de incadrare
// (salariu_baza) al unui angajat. Alte campuri reprezinta:
// salariu_obt - salariul lunar obtinut de angajat, ora_sp
// - suma platita pentru o ora suplimentara, nr_ore_sp -
// numar de ore suplimentare efectuate de catre angajat.
// Campul salariu_obt este necompletat initial si se va
// completa cu suma dintre salariu_baza, total_sporuri
// si suma platita pentru ore suplimentare. Vectorul a
// memoreaza datele pentru 300 de angajati ai unei firme.
// 
// Scrie [...] pentru :
// a) Completarea campului salariu_obt pentru toti angajatii.
// b) Afisarea salariului de valoare maxima, obtinut de
// catre angajatii din departamentul de productie.
// c) Afisarea numarului total de ore suplimentare efectuat
// de catre angajatii din departamentul marketing.

void solutiePb5() {
	Angajat a[300];
	int n;
	citirePb5(a, n);
	cout << "a) Salariul de valoare maxima obtinut de angajatii de la productie este : " << salariuMaxProductie(a, n) << endl;
	cout << "b) Numarul total de ore suplimentare ale angajatiilor de la marketing este : " << totalOreMarketing(a, n) << endl;
}

// Problema 6
// Se considera urmatoarea declaratie:
// struct student(Student in structuri.h)
// 
// Structura student memoreaza numele, grupa, anul de studiu
// al unui student, numarul de credite obtiute la disciplinele
// de studiu (nr_credite). Campul bursa este necompletat initial
// si se va completa cu valoarea "Da", daca studentul va primi
// bursa sau "Nu", in caz contrar. 
// Conditia de primire a bursei este sa aiba minimum 30
// de credite obtinute.
// Vectorul st memoreaza datele pentru 300 studenti.
// 
// Scrie [...] pentru :
// a) Completarea campului bursa pentru studenti.
// b) Afisarea datelor studentilor (nume, an studiu, grupa)
// pentru care vor primi bursa.

void solutiePb6() {
	Student st[300];
	int n;
	citirePb6(st, n);
	cout << "Datele studentilor care primesc bursa sunt :" << endl;
	afisareDateStudentiBursa(st, n);
}

// Problema 7
// Se considera declararile urmoatoare:
// struct examinare(Examinare in structuri.h);
// struct student(StudentExaminare in structuri.h)
// 
// Structura examinare memoreaza disciplina de studiu, tipul
// de examinare al disciplini (scris, oral, proiect) si
// numarul de credite obtinute la examinare [0,7]. Structura
// student memoreaza numele, grupa, anul de studiu, numarul
// total de credite obtinute la fiecare disciplina (dat de
// vectorul e). Vectorul st memoreaza informatii pentru 200
// de studenti.
// 
// Scrie [...] pentru :
// a) Completarea campului nr_total_credite pt. toti studentii;
// b) Afisarea datelor studentilor (nume, an studiu, grupa,
// disciplina) care au obtinut credite la proiecte.
// c) Afisarea numarului total de credite de valoare
// maxima obtinut de studenti.

void solutiePb7() {
	StudentExaminare st[200];
	int n;
	citirePb7(st, n);
	cout << "a) Datele elevilor care au luat puncte la proiecte sunt :" << endl;
	afisareDateDacaCrediteProiecte(st, n);
	cout << endl << "b) Numarul total de punctaje de valoare maxima : " << nrTotalPunctajMaximStudenti(st, n) << endl;
}

// Problema 8
// Se considera declararile urmatoare:
// struct data(Data in structuri.h);
// struct spectacol(Spectacol in structuri.h)
// 
// Structura data memoreaza o data calendaristica. Structura
// spectacol memoreaza denumirea, autorul, data desfasurarii
// unui spectacol (data_sp). Campul nr_bilete reprezinta
// numarul de bilete vandute pentru spectacol. Campul pret
// reprezinta pretul unui bilet la spectacol.
// Vectorul sp memoreaza date despre 50 de spectacole.
// 
// Scrie [...] pentru :
// 
// a) Determinarea si afisarea sumei incasate din vanzarea
// biletelor pentru toate spectacolele desfasurate in
// luna mai din anul 2019.
// b) Determinarea si afisarea datelor calendaristice in care
// au fost sustinute spectacole cu piese de I.L.Caragiale.

