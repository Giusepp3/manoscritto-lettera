#ifndef MANOSCRITTO_H
#define MANOSCRITTO_H
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

namespace Libri{
	
	class manoscritto{
		protected:
			int codice;
			char* autore;
			int numpag;
			char* formato;
			void set_cod(const int);
			void set_aut(const char*);
			void set_nump(const int);
			void set_form(const char*);
			virtual void print(ostream & os)const;
			virtual void read(istream & in);
			
		public:
			manoscritto();
			manoscritto(const int, const char*, const int, const char*);
			~manoscritto();
			manoscritto(const manoscritto &);
			manoscritto operator=(const manoscritto &);
			int get_cod()const;
			char* get_aut()const;
			int get_nump()const;
			char* get_form()const;
			friend ostream & operator<<(ostream & os, const manoscritto &);
			friend istream & operator>>(istream & in, manoscritto &);
			virtual void visualizza_dati(ostream & of)const;
			virtual bool memorizza_dati(const char* file)const;
		
						
	};
	
	
	
	
}

#endif //MANOSCRITTO_H
