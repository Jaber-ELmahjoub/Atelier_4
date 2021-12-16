#include <iostream>
#include <list>
#include <iterator>

using namespace std;
class animal;
class elments;
class chat;
class chien;
class entraineur;
class repas;
class competition;
class race ;
class animal {   // declaration du class animal
protected:
    string nom;
    int age;
    string genre;

public:
 void set_nom_animal( string n_animal ){nom=n_animal;}  
string get_nom_animal(){return nom ;}

void set_genre (string g ){genre=g;}
string get_genre(){return genre ;}

void set_age( int a ){age=a;}
int get_age(){return age ;} };



class repas{              //declaration du classe repas
private:
    string nom;
    int heure;
    string description;

     list<elments>*lrepas; 
public:
    repas(){lrepas = new list<elments>();}       
void set_nom( string n ){nom=n;}
string get_nom(){return nom ;}

void set_description (string d ){description=d;}
string get_description(){return description ;}

void set_heure( int h ){heure=h;}
int get_heure(){return heure ;}

 void set_list(list<elments> *lre ){
 this->lrepas = lre ;}

 list<elments>* getlistB(){
return this->lrepas ;}
~repas(){delete this->lrepas ; }



};


class elments{      // declaration de la class elment
private:
    string nom1 ;
   string type;
    repas r1;       
public:
void set_nom1( string n1 ){nom1=n1;}   

void set_type( string t ){type=t;}
string get_type(){return type ;}

void set_repas( repas re ){r1=re;}
repas get_repas(){return r1 ;}

};





class chat : public animal{  //declaration de la classe chat 
private:
 string type ;
 repas chats;   
public:


  void sautez(){cout<<"sauter";}

  void set_repas11( repas re11 ){this->chats=re11;}
repas get_repas11(){return this->chats ;}};





class entraineur{         // declaration de la classe entraineur

private :
    string nom;
    string desciption;
   list<chien> chien1;  
public :

void set_nom_entraineur( string n_entraineur ){nom=n_entraineur;}
string get_nom_entraineur(){return nom ;}

void set_description_entraineur (string des_entraineur ){desciption=des_entraineur;}
string get_desription_entraineur(){return desciption ;}



void set_list_chien(list<chien> chien0 ){
this->chien1 = chien0 ;
}

list<chien> getlist_chien(){
return this->chien1 ;
}};



class race {  // declaration de la classe race
    string specificite ;
protected:
    void set_specificite(string spe){specificite=spe;}
    string get_specificite(){return specificite;}
    void isracehybride(){cout<<"isracehybride"<<endl;};
    };






class chien:public animal,public race {  // declaration de la classe chien 
private:
    string taille ;
    list<entraineur>entraineur1; 
public :
    void ischass3(){ cout<<"i'am ischass3"<<endl;}; 

    void set_taille(string ta){taille=ta;}
    string get_taille(){return taille;}

   void set_list_entraineur(list<entraineur> entraineur0 ){
  entraineur1 = entraineur0 ;}


   list<entraineur> getlist_entraineur(){
  return entraineur1 ;}};







class competition {    //declaration de classe competition
private:
    string date;
    string nom;
public:
   int ordre;
    entraineur ent;  
    chien   chie;      
     void set_date(string d_){date=d_;}
     string get_date(){return date ;}

     void set_nom_competition(string n_comp){nom=n_comp;}
     string get_nom_competition(){return nom ;}

    void set_ordre(int ord){ordre=ord; }
    int get_ordre(){return ordre ;}

    void set_competition_entraineur(entraineur entr){ent=entr;}
    entraineur get_competition_entraineur(){return ent;}

    void set_competition_chien(chien chi){chie=chi;}
   chien get_competition_chien(){return chie;}};







int main()
{
repas r1;
r1.set_heure(14);
cout<<"l'heure du repas est "<<r1.get_heure()<<endl;

chat chat1;
chat1.set_age(15);
cout<<"l'age du chat est:"<<chat1.get_age()<<endl;

elments el;
el.set_type("chiken");
cout<<"le type d'element est " <<el.get_type()<<endl;


entraineur e;
e.set_nom_entraineur("jack");

cout<<"le nom de l'entraineur est : "<<e.get_nom_entraineur()<<endl;

chien chien1;
chien1.set_taille("200 cm");
cout<<"la taille du chien est "<<chien1.get_taille()<<endl;






    return 0;
}
