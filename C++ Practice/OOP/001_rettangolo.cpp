/******************************************************************
                      Liceo Scienfitifo G.Galilei
                      Indirizzo Scienze Applicate
                          Corso di Informatica
                       Anno Scolastico 2017/2018


Descrizione del Programma:
   Realizzazione della classe Rettangolo.

Autore: prof. Michele Salvemini
*******************************************************************/
#include <iostream>
using namespace std;

class Rettangolo{
    //attributi
    float base;
    float altezza;

public:
    float getBase(){
        return base;
    }
    void setBase(float pbase){
        base=pbase;
    }
    float getAltezza(){
        return altezza;
    }
    void setAltezza(float paltezza){
        altezza=paltezza;
    }
    float calcolaArea(){
        float risultato = base*altezza;
        return risultato;
    }
};

int main(){
    Rettangolo r,s;
    r.setBase(8);
    r.setAltezza(5);
    cout<<r.getBase()<<endl;
    s.setBase(18);
    s.setAltezza(15);
    cout<<r.calcolaArea()<<endl;
    cout<<s.calcolaArea()<<endl;
}
