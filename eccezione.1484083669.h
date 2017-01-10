#ifndef ECCEZIONE_H
#define ECCEZIONE_H
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class duplicato{
	private:
		string errmsg;
		string errfunc;
	public:
		duplicato();
		duplicato(const char* msg, const char* func){ errmsg=msg; errfunc=func; }
};

#endif //ECCEZIONE_H
