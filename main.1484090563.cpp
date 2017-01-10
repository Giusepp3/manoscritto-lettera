//Giuseppe Ferrara
#include "manoscritto.h"
#include <iostream>
#include <cstring>
#include "lettera.h"
#include "eccezione.h"

using namespace std;
using namespace Libri;

int main() {
	
	lettera l;
	manoscritto m,m1;
	manoscritto m2(35215,"Giovanni",432,".txt");
	manoscritto m3(m2);
	m1=m2;
	cin >> m3;
	m1=m3=m;
	manoscritto m4=m1;
	
	cout << m1 << endl << m2 << endl << m3 << endl << m4 << endl << m << endl;
	
	if(m4.memorizza_dati("dati.bin")) cout << "Scrittura completata!\n";
	
	if(m2.memorizza_dati("dati.bin")) cout << "Scrittura completata!\n";
	
	

	return 0;
}
