    	 #include<iostream>
	 using namespace std;
	 
	 class complexe{			
	 	
	 	public:
	 	int img;
	 	int rel;
	 	
	 	public:
	 		complexe();
 		    complexe(int x,int y){		
 			rel=x;
 	    	img=y;
		 }
	 		void afficher(){
	 			cout<<"La somme du deux nombres complexes est: ";
	 			cout<<rel<<"+ i"<<img<<endl;
			 }  
			 	 
	complexe operator +(complexe z1) {   //surcharge d'operateur pour l'addition

		int a = rel + z1.rel;
		int b = img+ z1.img;
		complexe z2;
		z2.img= b;
		z2.rel = a;
		return z2;




	}
	 
	 };
	 
	
	 
	/* bool operator==(complexe const& a,complexe const& b){
	 	
	 	if(a.rel == b.rel && a.img == b.img)
	 		return true;
	 	else
	 		return false;
	 }
*/
	 
	 
	 int main(){
	 	int x,y,v,w;
	    
	    cout<<"Le premier nombre: "<<endl;
	 	cout<<"Entrer la partie reelle de votre nombre: ";
	 	cin>>x;
	 	cout<<"Entrer la partie imaginaire de votre nombre: ";
	 	cin>>y;
	 	complexe z1(x,y);
	 	cout<<"Le deusieme nombre: "<<endl;
	 	cout<<"Entrer la partie reelle de votre nombre: ";
	 	cin>>v;
	 	cout<<"Entrer la partie imaginaire de votre nombre: ";
	 	cin>>w;
	    complexe z2(v,w);
	    cout<<"-------------------------------------------------"<<endl;
		/*if (z1==z2)
			cout<<"Les deux nombres sont egaux"<<endl;
		else
			cout<<"les deux nombres ne sont pas egaux"<<endl;	
		 return 0;				
	 	*/
	 	complexe z3=z1+z2;
	 	z3.afficher();
	 }
