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

        void xhtmlDocs_Begin();
        void xhtmlDocs_End();
        void xhtmltitle(string);
        void xhtmlDocs_acess();
        void xhtmlForm(string action);
        void xhtml_valores(string , int );
        void DispValue(int value);

        //CSS
        void style();



private:

    string _name,
           _senha;


};


#endif // WEB
