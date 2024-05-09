#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "WEB.hpp"

CGI_WEB::CGI_WEB()
{
    //empty
    _name="";
    _senha="";
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
         << "In/Out in CGI C++"
         << "</h1>";
}

void CGI_WEB::xhtmlForm(string action)
{
    cout << "<div class= \"tela-ini\" >";
         CGI_WEB::xhtmlDocs_acess();
    cout <<"<p>" << action << "</p>"
         << "<form method= \"post\" action= \"ProjetoCGI_v0.2.cgi\" >"
         << "<input class=\"edit\" type= \"text\" name= \"numstr\"> "
         << "<input class=\"enter\" type = \"submit\" value =\"Enter\" />" //Botão
         << "</form>";
         //<< "</div>";
}

void CGI_WEB::xhtml_valores(string valorStr, int valorInt)
{
    cout << "<p>"
         <<  valorStr
         << ":"
         << valorInt
         << "</p>"
         << "</div>";
}


//=======================================================
//--Fim da pagina--
void CGI_WEB::xhtmlDocs_End()
{
    cout << "</body>\n";
    cout << "</html>\n";

}



void CGI_WEB::style()
{

    cout << "<style>"
         <<".body"
         << "{"
         << "font-family:Impact, Haettenschweiler, \'Arial Narrow Bold\', sans-serif; "
         << "background-image: linear-gradient(80deg, rgb(171, 171, 169), rgb(171, 171, 169) );"
         << "}";

    cout << ".tela-ini"
         << "{"
         << "    background-color: rgba(126, 125, 125, 0.9);"
         << "   position: absolute;"
         << "   top: 45%;"
         << "   left: 45%;"
         //transform: translate(-50%, 50%);
         << "   padding: 80px;"
         << "  border-radius: 15px;"
         << "  color: #fff;";

    cout << ".login "
         << "{"
         << "   padding: 15px;"
         << "   border: none;"
         << "   outline: none;"
         << "   font-size: 20px;"
         << "}"

         << " .PassWord "
         << "{"
         << "    padding: 15px;"
         << "    border: none;"
         << "    font-size: 20px;"
         << "} "

         << "</style>";
}
















