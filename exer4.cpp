#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<string> lista;                         //declaration de la liste 
   
lista.push_front("ahmed ,reda, 13ans \n"); 
lista.push_front("khadija,kilwa , 43ans" );
lista.push_front("john ,alexander, 18ans");
lista.push_front("jaber,elmahjoub , 20ans" );
lista.push_front("alexa ,amazon, 108ans");
lista.push_front("maria,jollio , 56ans " );
cout<<"La liste original:\n"<<endl;
std::list<string>::iterator i;                  //decaration du l iterateur
for (i = lista.begin(); i != lista.end(); ++i){ //Boucle pour affichage de la liste originale  
cout <<*i<< endl;
}
lista.sort();                                    //triage de la liste par ordre d alphabet
cout<<" la liste triée: ";
for (i = lista.begin(); i != lista.end(); ++i){ //boucle por affichage la liste triee 
cout <<*i<< endl;
}
return 0;
}
