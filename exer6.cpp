#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
    if ( diviseur == 0 ) {
throw "Attention on ne peut pas deviser par se!";
}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
float result, x, y;
cout << "Entrez l indice de l entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try {
result = Test::division(x, y);
cout << result << endl;
}catch (const char* e) {
cerr << e << endl;
}

return 0;
}
