#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout <<'\t'<< *it;
cout <<'\n';
}
int main()
{
 list <int> list1;
 int n,i,a;
 cout<<"Entrer la longueur du liste:";
 cin>>n;
   for (int i = 0; i < n; i++)
    {
        cout<<"la "<<i+1<<" ere valeur est:";
      	cin>>a; 
      	list1.push_front(a);
    }
    cout<<"Votre liste est:";
    showlist(list1);
    
return 0;
}















