/*
  Referencia : https://www.tutorialspoint.com/cplusplus/pdf/cpp_web_programming.pdf
*/
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


void CGI_WEB::xhtmlDocs_div()
{
    cout << "<div class=\"layout\">"
         << "   <img src=\"/..\\var\\www\\html\\montanhas.jpg\" width=\"1300\" height=\"500\">"
         << "   <img id=\"foto_perfil\" src=\"perfil\" width=\"250\" height=\"400\">"

         << "<h2 class=\"Nome\">Lucas Lorenço Alves</h2>"
         << "<h1 class=\"substring\">Desenvolvedor de Hardware</h1>"
         << "<br>"

         << "<br><br><br><br><br><br>"


         << "<h1 class=\"Who_ami\">QUEM SOU</h1>"
         << "<div class=\"div-em-colunas\">"
         << "<p>"
         << "   Olá sou Lucas Alves, formando em Engenharia da Computação e estudante de Engenharia Eletrônica"
         << "   apaixonado por tecnologia, criar deste portfólio que está acessando."
         << "   Residente de Florianópolis desde de 2009, já trabalhei em muitos lugares desta maravilhosa ilha"
         << "   tenho como hobbie treinar Jiu-Jitsu e levo a minha vida nos estudos de programação e eletrônica"
         << "   como fiz a vida inteira."
         << "</p>"


         << "</div>"
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
         << "div.layout {"
         << "width: 1300px;"
         << "height: auto;"
         << "          background-color: rgb(252, 252, 251);"
         << "          margin: -40px auto 50px auto;"
         << "          box-shadow: 0px 0px 10px black;"

         << "      }"

         << "      #foto_perfil {"
         << "         background:"
         << " rgb(16, 140, 182);"
         << "          border-radius: 50%;"
         << "         width: 400px;"
         << "         height: 400px;"
         << "      position: absolute;"
         << "       margin: 300px auto 20px -900px;"

         << "    }"

         << "   h2.Nome {"

         << "      position: absolute;"
         << "      left: 30%;"
         << "     bottom: 75%;"
         << "      font-family: 'Courier New', Courier, monospace;"
         << "     font-size: 400%;"
         << "     color: aliceblue;"
         << "  }"

         << "  h1.substring {"

         << "      position: absolute;"
         << "      left: 38%;"
         << "     bottom: 75%;"
         << "     font-family: 'Courier New', Courier, monospace;"
         << "     font-size: 150%;"
         << "     color: aliceblue;"
         << " }"

         << " .div-em-colunas {"
         << "    -webkit-column-count: 2;"
         /* Chrome, Safari, Opera */
         << "   -moz-column-count: 2;"
         /* Firefox */
         << "   column-count: 2;"
         /* padrão */
         << "    padding: 5%;"
         << " }"
         << " p {"
         << "     text-align: justify;"
         << "     text-indent: 50px;"
         /* font-family: 'Montserrat', sans-serif;*/
         << "     font-family: 'Titillium Web', sans-serif;"
         << "     color: rgb(122, 123, 124);"
         << " }"


         << "  h1.Who_ami {"

         << "     padding: 5%;"
         << "    font-family: 'Courier New', Courier, monospace;"
         << "    color: rgb(122, 123, 124);"
         << " }"
         << " </style>";
}
















