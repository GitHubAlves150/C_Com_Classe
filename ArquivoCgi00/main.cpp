#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char *str = getenv( "CONTENT_LENGTH" );
    int tamanho  = atoi( str );
    char vetor[tamanho + 1];
    fgets( vetor, tamanho + 1, stdin );
    printf( "Content-type: text/html\n\n" );
    cout<< "<html>\n" <<endl;
    cout<< "\t<head>\n" <<endl;
    cout<<  "\t\t<meta charset=\"UTF-8\">\n" <<endl;
    cout<< "\t\t<title>Lendo dados do formulário</title>\n" <<endl;
    cout<<  "\t</head>\n" <<endl;
    cout<<  "\t<body>\n" <<endl;
    cout<<  "\t\t<h1>Olá mundo!</h1>\n" <<endl;
    cout<<  "\t\t<h1>Estou lendo: %s</h1>\n" << vetor <<endl;
    cout<<  "\t</body>\n" <<endl;
    cout<<  "</html>\n" <<endl;
    cout<< "\n\n"<<endl;
    return 0;
}

