#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <cstdlib>
using std::atoi;



int main()
{
    /*
    cout<<"!DOCTYPE html>" << endl;
    cout<<"html lang=\"en\"> " << endl;
    cout<<"<head>" << endl;
    cout<<"meta charset=\"UTF-8\">" << endl;
    cout<<"meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">" << endl;
    cout<<"title> Web </title>" << endl;
    cout<<"/head>" << endl;
    cout<<"body>" << endl;
    cout<<"<h1> Titulo 22 abril 2024cout </h1>" << endl;
    cout<<"/body>" << endl;
    cout<<"/html>" << endl;
    */

    /*
    char name[6]="lucas";

    cout << name;
    int inteiro= atoi(name);
    cout << "\n";
    cout << inteiro+5 << "\n";

    vector<int> vec= {10,25,14,78,98,11};
    int A=205;

    auto res = find(vec.begin(), vec.end(), A);
    if(res != end(vec))
        cout << "Elemente " << A << " found" << endl;
    else
        cout << "Elemente " << A << " not found" << endl;
    */


    string dataStr= "A casa amaldiocoada em hamtVille";
    int res= dataStr.find("amaldiocoada");
    cout << res;
    return 0;
}











