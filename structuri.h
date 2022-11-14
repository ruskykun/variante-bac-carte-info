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