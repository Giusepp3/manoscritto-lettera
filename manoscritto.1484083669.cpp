#include "manoscritto.h"

namespace Libri{
	
void manoscritto::set_cod(const int cod){
	codice = cod;
}
void manoscritto::set_aut(const char* aut){
	if(autore) delete [] autore;
	autore = new char [strlen(aut)+1];
	strcpy(autore,aut);
}
void manoscritto::set_nump(const int nump){
	numpag = nump;
}
void manoscritto::set_form(const char* form){
	if(formato) delete [] formato;
	formato = new char [strlen(form)+1];
	strcpy(formato,form);
}
void manoscritto::print(ostream & os)const{
	os << codice << ' ' << autore << ' ' << numpag << ' ' << formato << ' ';
}
void manoscritto::read(istream & in){
	int buf;
	char buffer [600];
	in >> buf;
	set_cod(buf);
	in.ignore();
	in.getline(buffer,600);
	set_aut(buffer);
	in>>buf;
	set_nump(buf);
	in.ignore();
	in.getline(buffer,600);
	set_form(buffer);
}

manoscritto::manoscritto(){
	codice = 0;
	autore = new char[1];
	strcpy(autore,"");
	numpag = 0;
	formato = new char [1];
	strcpy(formato,"");
}
manoscritto::manoscritto(const int cod, const char* aut, const int nump, const char* form){
	codice = cod;
	autore = new char [strlen(aut)+1];
	strcpy(autore,aut);
	numpag = nump;
	formato = new char [strlen(form)+1];
	strcpy(formato,form);
}
manoscritto::~manoscritto(){
	delete [] autore;
	delete [] formato;
}
manoscritto::manoscritto(const manoscritto & m){
	codice = m.codice;
	autore = new char [strlen(m.autore)+1];
	strcpy(autore,m.autore);
	numpag = m.numpag;
	formato = new char [strlen(m.formato)+1];
	strcpy(formato,m.formato);
	
}
manoscritto manoscritto::operator=(const manoscritto & m){
	bool equ=false;
	if(this == &m) equ=true;
	if(!equ){
		codice = m.codice;
		autore = new char [strlen(m.autore)+1];
		strcpy(autore,m.autore);
		numpag = m.numpag;
		formato = new char [strlen(m.formato)+1];
		strcpy(formato,m.formato);	
	}
	
	return *this;
}
int manoscritto::get_cod()const{
	return codice;
}
char* manoscritto::get_aut()const{
	return autore;
}
int manoscritto::get_nump()const{
	return numpag;
}
char* manoscritto::get_form()const{
	return formato;
}
ostream & operator<<(ostream & os, const manoscritto & m){
	m.print(os);
	return os;
	
}
istream & operator>>(istream & in, manoscritto & m){
	m.read(in);
	return in;
	
}
	
	
}
