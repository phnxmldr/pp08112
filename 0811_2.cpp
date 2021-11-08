#include <iostream>
using namespace std ;


class Uczen {
public :
string imie;
string nazwisko;
int rok;
int klasa;
int grupa;
void wyswietlDane ( ) {
cout<< "Imie : "<<imie<< endl;
cout<<"Nazwisko : "<< nazwisko<< endl;
cout<<"Rok urodzenia : "<<rok<<endl;
cout<<"Klasa :"<<klasa<<endl;
cout<<"Grupa :"<<grupa<<endl; 
}
void metryczka(){
	cout<<"Program napisal \n Amir Berezhnov \n";
	};
};
int main () {
Uczen uczen;
uczen.metryczka();
cout<<"Podaj Imie - "<<endl; cin>>uczen.imie;
cout<<"Podaj Nazwisko - "<<endl; cin>>uczen.nazwisko;
cout<<"Podaj Rok Urodzienia - "<<endl; cin>>uczen.rok;
cout<<"Podaj Klase - "<<endl; cin>>uczen.klasa;
cout<<"Podaj Grupe - "<<endl; cin>>uczen.grupa;
uczen.wyswietlDane();

Uczen*kp = new Uczen;
}
