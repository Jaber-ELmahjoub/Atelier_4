#include<iostream>

using namespace std;

void nouvelledate(const string& date){		//Declaration de la fonction qui separe les donnes. 
		cout<<"Date:"<<date.substr(0,2)<<"/"<<date.substr(2,2)<<"/"<<date.substr(4,4)<<endl;	//utilisation de la fonction substr pour separer les donnes.
		cout<<"Heure:"<<date.substr(8,2)<<":"<<date.substr(10,2);
}
int main(){
	string date;							
	cout<<"Entrer la date complete:";
	cin>>date;
	nouvelledate(date);					//Appelle a la fonction pour faire le test.
	return 0;
}
