#include <iostream>
using namespace std;
#include <string>
using std::string;

#include "WEB.hpp"

int main()
{

    CGI_WEB Page;

    Page.xhtmlDocs_Begin();//Inicio da pagina
    Page.xhtmltitle("REAA");//Titulo da aba
    Page.xhtmlDocs_acess();
    Page.xhtmlForm();




    Page.xhtmlDocs_End();//Fim da pagina
    return 0;
}
