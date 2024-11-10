#include <iostream>
using namespace std;

class Orologio {
    //attributi
    int ore;
    int minuti;
    int secondi;
public:
    //metodi
    Orologio ();
    Orologio (int pore, int pminuti,int psecondi );
    int getOre ();
    void setOre (int pore);
    int getMinuti ();
    void setMinuti (int pminuti);
    int getSecondi ();
    void setSecondi (int psecondi);

    void incrementaSecondi();
    void incrementaSecondi(int psecondi);
    void toString();
    ~Orologio ();
};

Orologio::Orologio (){
    cout<<"Inizio"<<endl;
    ore=0;
    minuti=0;
    secondi=0;
}


Orologio::Orologio (int pore, int pminuti,int psecondi ){
    cout<<"Inizio Parametri"<<endl;
    if (pore>=0 && pore<=23){
        ore=pore;
    }else {
        ore=0;
    }
    if (pminuti>=0 && pminuti<=59){
        minuti=pminuti;
    }
    else {
        minuti=0;
    }
    if (psecondi>=0 && psecondi<=59){
        secondi=psecondi;
    }else {
        secondi=0;
    }
}

int Orologio::getOre (){
    return ore;
}

void Orologio::setOre (int pore){
    if (pore>=0 && pore<=23){
        ore=pore;
    }else {
        ore=0;
    }
}

int Orologio::getMinuti (){
    return minuti;
}

void Orologio::setMinuti (int pminuti){
    if (pminuti>=0 && pminuti<=59){
        minuti=pminuti;
    }
    else {
        minuti=0;
    }
}

int Orologio::getSecondi (){
    return secondi;
}

void Orologio::setSecondi (int psecondi){
    if (psecondi>=0 && psecondi<=59){
        secondi=psecondi;
    }else {
        secondi=0;
    }
}

Orologio::~Orologio (){
    cout<<"Terminazione eseguita."<<endl;
}

void Orologio::incrementaSecondi(){
    secondi=secondi+1;
	if(secondi>59){
		secondi=0;
		minuti=minuti+1;
	}
	if(minuti>59){
		minuti=0;
		ore=ore+1;
		if(ore>23){
			ore=0;
		}
	}
}

void Orologio::incrementaSecondi(int psecondi){
	secondi=secondi+psecondi;
	if(secondi>59){
    	minuti=minuti+1;
		secondi=secondi-60;}
	    if(minuti>59){
	    	ore=ore+1;
	    	if(ore>23){
	    		ore=0;
			}
	    }
	}

void Orologio::toString(){
    cout<<ore<<":"<<minuti<<":"<<secondi<<endl;
}


int main (){
    Orologio c;
    c.setOre(17);
    c.setMinuti(42);
    c.setSecondi(54);

    cout<<c.getOre()<<endl;
    cout<<c.getMinuti()<<endl;
    cout<<c.getSecondi()<<endl;

    int oracorrente,minuticorrente,secondicorrente;

    cout<<"Inserire Ora: ";
    cin>>oracorrente;
    cout<<"Inserire Minuti: ";
    cin>>minuticorrente;
    cout<<"Inserire Secondi: ";
    cin>>secondicorrente;

    Orologio d(oracorrente,minuticorrente,secondicorrente);

    cout<<d.getOre()<<endl;
    cout<<d.getMinuti()<<endl;
    cout<<d.getSecondi()<<endl;

    int i=0;
    
    cout<<"secondi incrementati di uno"<<endl;
    for(i=0;i<60;i++){
        d.incrementaSecondi();
        d.toString();
    }
    
    //l'utente sceglie il numero da inserire
    int secondiUtente=0;
    
    cout<<"inserisci di quanti secondi vuoi incrementare"<<endl;
    cin>>secondiUtente;
    
    for(i=0;i<60;i++){
        d.incrementaSecondi(secondiUtente);
        d.toString();
    }
}

