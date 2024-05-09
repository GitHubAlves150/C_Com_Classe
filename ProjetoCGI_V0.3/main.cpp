/*
    Trabalho de conclusão sobre o entendimento de cgi em C++
    Maio- 2024
    Lucas Alves
*/

#include <iostream>
#include "WEB.hpp"
using namespace std;
int main()
{

    CGI_WEB Page;

    Page.xhtmlDocs_Begin();
    Page.xhtmlDocs_End();
    Page.xhtmltitle("REAA");
    Page.xhtmlDocs_div();

    return 0;
}





















