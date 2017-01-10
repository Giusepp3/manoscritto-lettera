#include "lettera.h"

namespace Libri{
	
void lettera::print(ostream & os)const{
	this->manoscritto::print(os);
	os << mittente << ' ' << destinatario << ' ';
}

void lettera::read(istream & in){
	this->manoscritto::read(in);
	char buffer[600];
	in.getline(buffer,600);
	set_mit(buffer);
	in.getline(buffer,600);
	set_dest(buffer);
}

void lettera::set_mit(const char* m){
	if(mittente) delete [] mittente;
	mittente = new char [strlen(m)+1];
	strcpy(mittente,m);
}
void lettera::set_dest(const char* d){
	if(destinatario) delete [] destinatario;
	destinatario = new char [strlen(d)+1];
	strcpy(destinatario,d);
}
	
	
lettera::lettera() : manoscritto(){
	mittente = new char [1];
	strcpy(mittente,"");
	destinatario = new char [1];
	strcpy(destinatario,"");
	
}

lettera::lettera(const int cod, const char* aut, const int nump, const char* form, const char* mitt, const char* dest) : manoscritto(cod,aut,nump,form){
	mittente = new char[strlen(mitt)+1];
	strcpy(mittente,mitt);
	destinatario = new char [strlen(dest)+1];
	strcpy(destinatario,dest);
	
}


lettera::~lettera(){
	delete [] mittente;
	delete [] destinatario;
	
}

lettera::lettera(const lettera & l) : manoscritto(l){
	mittente = new char [strlen(l.mittente)+1];
	strcpy(mittente,l.mittente);
	destinatario = new char [strlen(l.destinatario)+1];
	strcpy(destinatario,l.destinatario);
	
}

lettera lettera::operator=(const lettera & l){
	if(this==&l) return *this;
	set_cod(l.get_cod());
	set_aut(l.get_aut());
	set_nump(l.get_nump());
	set_form(l.get_form());
	set_mit(l.get_mit());
	set_dest(l.get_dest());
	
	return *this;
}
	
char * lettera::get_mit()const{
	return mittente;
}

char* lettera::get_dest()const{
	return destinatario;
}


ostream & operator<<(ostream & os, const lettera & l){
	l.print(os);
	return os;
}

istream & operator>>(istream & in, lettera & l){
	l.read(in);
	return in;
}
	
	
}
