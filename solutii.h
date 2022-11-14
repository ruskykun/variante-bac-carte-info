#include "functii.h"

// PROBLEME DE LA CAP. 7 STRUCTURI NEOMOGENE

// Problema 1
// Se considera declararea urmatoare:
// struct melodie(scrisa in structuri.h)
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
// struct medalie(scrisa in structuri.h)
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
// struct data(scrisa in structuri.h);
// struct consultatie(scrisa in structuri.h)
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
// struct data(scrisa in structuri.h);
// struct excursie(scrisa in structuri.h)
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

