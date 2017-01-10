#ifndef LETTERA_H
#define LETTERA_H
#include <iostream>
#include <cstring>
#include "manoscritto.h"

using namespace std;

namespace Libri{
	
	class lettera:public manoscritto {
		private:
			char * mittente;
			char* destinatario;
			virtual void print(ostream & os)const;
			virtual void read(istream & in);
			void set_mit(const char*);
			void set_dest(const char*);
			
		public:
			lettera();
			lettera(const int, const char*, const int, const char*, const char*, const char*);
			~lettera();
			lettera(const lettera &);
			lettera operator=(const lettera &);
			char* get_mit()const;
			char* get_dest()const;
			friend ostream & operator<<(ostream & os, const lettera & l);
			friend istream & operator>>(istream & in, lettera & l);
			
			
	};
	
	
	
	
}

#endif //LETTERA_H
