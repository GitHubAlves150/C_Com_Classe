#ifndef WEB
#define WEB

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::stoi;

class CGI_WEB
{
public:
        CGI_WEB();
        //html
        void xhtmlDocs_Begin();
        void xhtmlDocs_End();
        void xhtmltitle(string);
        void xhtmlDocs_div();

        //CSS
        void style();
//Sem dados privados

};


#endif // WEB
