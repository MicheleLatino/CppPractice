#include<iostream>
using namespace std;

class Auto{
    string marca;
    string modello;
    float velocita;
    
public:
    Auto();
    Auto(string pmarca,string pmodello, float velocita);
    
    string getMarca();
    void setMarca(string pmarca);
    
    string getModello();
    void setModello(string pmodello);
    
    float getVelocita();
    void setVelocita(float pvelocita);
    
    float accellera(float d);
    
    float frena();
};
  
 //IMPLEMENTAZIONE

Auto::Auto(){
	marca="";
	modello="";
	velocita=0;
}
Auto::Auto(string pmarca,string pmodello,float pvelocita){
    marca=pmarca;
    modello=pmodello;
    velocita=pvelocita;
}
string Auto::getMarca(){
    return marca;
}
void Auto::setMarca(string pmarca){
    marca=pmarca;
}
string Auto::getModello(){
    return modello;
}
void Auto::setModello(string pmodello){
    modello=pmodello;
}
float Auto::getVelocita(){
    return velocita;
}
void Auto::setVelocita(float pvelocita){
    velocita=pvelocita;
}
float Auto::accellera(float d){
    float accellerazione;
    cout<<"inserisci d";
    cin>>d;
    accellerazione=d+velocita;
    if(accellerazione>200){
        accellerazione=0;
    }
    return accellerazione;
}
float Auto::frena(){
    velocita=0;
    return velocita;
}

int main(){
	Auto r;
	r.setMarca("ferrari");
	r.setModello("f22");
	r.setVelocita(199);
	cout<<r.accellera(7)<<endl;
	cout<<r.frena()<<endl;
	
}
