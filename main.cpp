#include <iostream>
#include "CMatrix.h"
using namespace std;

int main()
{
    string s = "[8.9 7.3 4.8 2.4; 2.3 6.5 8.9 1.2; 4.9 3.8 7.2 7.5; 9.8 3.4 7.5 8.9]";
    CMatrix A;
    A.copy(s);
    string s1 = "[1.2 5.7 4.2 1.4; 6.3 2.5 8.1 3.1; 6.4 2.8 7.1 8.1; 3.2 5.1 7.2 6.2]";
    CMatrix B;
    B.copy(s1);
    cout << A.getString() << endl;
    cout << A.getCofactor(A.getnR(),A.getnC()).getString() << endl;
    return 0;
}
