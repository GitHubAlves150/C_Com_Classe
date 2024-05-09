#include <iostream>
#include <cstring>
#include "Hellow.hpp"


DigaOi::DigaOi(string comprimentos): _hellow(comprimentos)
{
	//empty
}

void DigaOi::setComprimentar(string saudacoes)
{
	_hellow = saudacoes;
}

string DigaOi::getComprimentos()
{
	return _hellow;
}

void DigaOi::Toshow()
{

	cout << _hellow << endl;


}
