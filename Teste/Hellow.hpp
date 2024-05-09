#ifndef HELLOW_H
#define HELLOW_H

#include <iostream>
#include <cstring>
//using std::string;
using namespace std;


class DigaOi
{

public:
	DigaOi(string= " ");//construtor
        void setComprimentar(string);
	string getComprimentos();
	void Toshow();
private:
	string _hellow;

};

#endif //HELLOW_H
