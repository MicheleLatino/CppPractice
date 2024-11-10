/******************************************************************
                      Liceo Scienfitifo G.Galilei
                      Indirizzo Scienze Applicate
                          Corso di Informatica
                       Anno Scolastico 2017/2018


Descrizione del Programma:
   Realizzazione della classe Rettangolo, implementazione metodi separata

Autore: prof. Michele Salvemini
*******************************************************************/
#include <iostream>
using namespace std;

//PROTOTIPO CLASSE
class Rettangolo{
    //attributi
    float base;
    float altezza;

public:
    float getBase();
    void setBase(float pbase);
    float getAltezza();
    void setAltezza(float paltezza);
    float calcolaArea();
};

//IMPLEMENTAZIONE CLASSE
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
