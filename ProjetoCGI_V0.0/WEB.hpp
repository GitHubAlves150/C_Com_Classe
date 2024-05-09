#ifndef WEB
#define WEB

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class CGI_WEB
{
public:
        CGI_WEB();

        void xhtmlDocs_Begin();
        void xhtmlDocs_End();
        void xhtmltitle(string);
        void xhtmlDocs_acess();
        void xhtmlForm();
        void DispValue(int value);



private:



};


#endif // WEB
