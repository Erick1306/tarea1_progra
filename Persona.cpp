#include<iostream>.h
using namespace std;
class Persona{
    //atributos
    protected : string nombres,apellidos,direccion;
                int telefono;
    //constructo
    protected :
            Persona(){
            }
            Persona(string nom,string ape,string dir,int tel){
                nombres = nom;
                apellidos = ape;
                direccion= dir;
                telefono =tel;
            }
    //metodo
    void mostrar();

};