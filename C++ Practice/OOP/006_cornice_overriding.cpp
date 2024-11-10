/******************************************************************
 Descrizione del Programma:
   Ereditarietà e overriding

Autore: prof. Michele Salvemini
*******************************************************************/
#include <iostream>
using namespace std;

//PROTOTIPO CLASSE
class Rettangolo{
    //attributi
protected:

    float base;
    float altezza;

public:
    Rettangolo();
    Rettangolo(float pbase,float paltezza);
    float getBase();
    void setBase(float pbase);
    float getAltezza();
    void setAltezza(float paltezza);
    float calcolaArea();
    void toString();
    ~Rettangolo();
};

class Cornice: public Rettangolo{
    int colore;

public:
    Cornice();
    void setColore(int pcolore);
    int getColore();
    void toString();
    ~Cornice();
};

//IMPLEMENTAZIONE CLASSE
Rettangolo::Rettangolo(){
    cout<<"inizio!!"<<endl;
    base=0;
    altezza=0;
}

Rettangolo::Rettangolo(float pbase,float paltezza){
    cout<<"inizio!!"<<endl;
    base=pbase;
    altezza=paltezza;
}

float Rettangolo::getBase(){
        return base;
    }

void Rettangolo::setBase(float pbase){
        base=pbase;
    }
float Rettangolo::getAltezza(){
    return altezza;
}
void Rettangolo::setAltezza(float paltezza){
    altezza=paltezza;
}
float Rettangolo::calcolaArea(){
    float risultato = base*altezza;
    return risultato;
}

Rettangolo::~Rettangolo(){
    cout<<"Ciao!!"<<endl;
}
void Rettangolo::toString(){
    cout<<"base: "<<base<<"altezza: "<<altezza<<endl;
}
void Cornice::setColore(int pcolore){
    colore=pcolore;
}
int Cornice::getColore(){
    return colore;
}
Cornice::Cornice(){
    cout<<"inizio Cornice!!"<<endl;
    colore=0;
}
Cornice::~Cornice(){
    cout<<"FINE Cornice!!"<<endl;
}

void Cornice::toString(){
    cout<<"base: "<<base<<" altezza: "<<altezza<<" Colore: "<<colore<<endl;
}
int main(){
    Rettangolo r,s,k(55,33);
    r.setBase(8);
    r.setAltezza(5);
    cout<<r.getBase()<<endl;
    s.setBase(18);
    s.setAltezza(15);

    cout<<r.calcolaArea()<<endl;
    cout<<s.calcolaArea()<<endl;
    cout<<k.getBase()<<endl;
    cout<<k.getAltezza()<<endl;
    Cornice x;
    cout<<x.getBase()<<endl;
    cout<<x.getAltezza()<<endl;
    cout<<x.getColore()<<endl;

    s.toString();
    x.toString();

}
