#ifndef ELENCO_H
#define ELENCO_H
#include <iostream>
#include <cstring>
#include <fstream>
#include "manoscritto.h"
#include "lettera.h"
#include "eccezione.h"

//verificare funzioni memorizza file e leggi da file

using namespace std;


namespace Libri{
	
	class elenco{
		private:
			manoscritto el[dim];
			const int dim;
		
		public:
			elenco();
			elenco(const int d) : dim=d;{}
			void sort();
			void insert_ord(manoscritto &); //implementare algoritmo di inserimento ordinato
			bool search(const int)const; //implementare algoritmo di ricerca binaria
			bool search(const manoscritto &)const;
			void duplicato(const manoscritto &);
			
	};
	
	
	
}












#endif //ELENCO_H
