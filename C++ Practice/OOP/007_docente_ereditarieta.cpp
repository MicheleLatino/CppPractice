#include <iostream>
using namespace std;

class Anagrafica{
    string cognome;
    string nome;
public:
    Anagrafica();
    Anagrafica(string pcognome, string pnome);
    string getCognome();
    void setCognome(string pcognome);
    string getNome();
    void setNome(string pnome);
    void mostra();
    ~Anagrafica();

};

class Docente: public Anagrafica{
    string materia;
public:
    Docente();
    string getMateria();
    void setMateria(string pmateria);
    void mostra();
    ~Docente();
};

Anagrafica::Anagrafica(){
    cognome="";
    nome="";
}

Anagrafica::Anagrafica(string pcognome, string pnome){
    cognome=pcognome;
    nome=pnome;
}
string Anagrafica::getCognome(){
    return cognome;
}
void Anagrafica::setCognome(string pcognome){
    cognome=pcognome;
}
string Anagrafica::getNome(){
    return cognome;
}
void Anagrafica::setNome(string pnome){
    nome=pnome;
}
void Anagrafica::mostra(){
    cout<<"Cognome: "<<cognome<<" Nome: "<<nome<<endl;
}
Anagrafica::~Anagrafica(){
    cout<<"Termina Anagrafica"<<endl;
}

Docente::Docente(){
    materia="";
}

string Docente::getMateria(){
    return materia;
}
void Docente::setMateria(string pmateria){
    materia=pmateria;
}
void Docente::mostra(){
    cout<<"materia: "<<materia<<endl;
}

Docente::~Docente(){
    cout<<"Termina Docente"<<endl;
}


int main(){
    Anagrafica a;
    a.setCognome("Rossi");
    a.setNome("Paolo");
    a.mostra();

    Docente d;

    d.setCognome("Salvemini");
    d.setNome("Michele");
    d.setMateria("Informatica");
    d.mostra();

}
