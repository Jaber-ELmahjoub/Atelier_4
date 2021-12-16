#include <iostream>
#include <iterator>
#include <set>
using namespace std;
    bool test(set<int> z,int w){            //Fonction bool pour tester l existance d un nombre
    set<int>::iterator it=z.begin();     
    bool b=false;                        
    for(it =z.begin(); it != z.end(); it++){  //Boucle for pour parcourir tous le set 
    if(*it==w)
    b=true;}
return b ;                          //Retourner le resultat soit 1 soit 0
}
int main(){
set<int> z1;
cout<<"La liste de 1 a 100 est :"<<endl;
    for (int i=0; i <= 100 ; ++i)           //Boucle pour former le set
{

z1.insert(i);                           //Insertion des elements dans le set
}
set<int> :: iterator it;             //Creation de l eterateur
    for(it=z1.begin(); it != z1.end();it++){        
        cout<<*it<<" ";                  //Affichage de tous le set de 1 a 100
}
    cout<<endl;
    int nbr;
    cout<<"Veuillez entrer un nombre pour tester si il est dans le set :";
    cin >> nbr;
    cout<<"Resultat:  "<<test(z1,nbr);      //Appelle a la fonction test 
return 0;
}
