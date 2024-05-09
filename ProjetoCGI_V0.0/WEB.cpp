#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "WEB.hpp"

CGI_WEB::CGI_WEB()
{
    //empty
}


void CGI_WEB::xhtmlDocs_Begin()
{
    cout <<  "Content-Type: text/html\n\n"; // gera saída do cabeçalho HTTP// gera s>";
    cout << "<?xml version = \"1.0\"?>"
         << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
         << "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">";
    cout << "<?xml version = \"1.0\"?>"
         << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
         << "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">";

}

void CGI_WEB::xhtmltitle(string title)
{
    cout << "<head>"
         << "<title>"
         <<  title

         << "</title>"
         << "</head>" ;
    cout << "<body>";
}

void CGI_WEB::xhtmlDocs_acess()
{
    cout << "<h1>"
         << "Login e senha"
         << "</h1>";
}

void CGI_WEB::xhtmlForm()
{
    cout << "<form class= \"admim\" method= \"post\" action= \"/cgi-bin/login.cgi\" >"
         << "<input type= \"text\" name= \"login\"> "
         << "<br> "
         << "<input type=\"text\" name=\"senha\"> "
         << "</form>";
}

void CGI_WEB::xhtmlDocs_End()
{
    cout << "</body>";
    cout << "</html>";

}
















