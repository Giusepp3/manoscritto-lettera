#ifndef MANOSCRITTO_H
#define MANOSCRITTO_H
#include <iostream>
#include <cstring>

using namespace std;

namespace Libri{
	
	class manoscritto{
		private:
			int codice;
			char* autore;
			int numpag;
			char* formato;
			void set_cod(const int);
			void set_autore()
			
		public:
			manoscritto();
			manoscritto(const int, const char* const int, const char*);
			~manoscritto();
			manoscritto(const manoscritto &);
			manoscritto operator=(const manoscritto &);
			
			
	};
	
	
	
	
}
