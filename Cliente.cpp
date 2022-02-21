#include"Persona.cpp"
#include <iosttream>.h
using namespace std;

class Cliente : Persona{
    //atributos
    private : String nit;

    //contructor

    public :
    Cliente(){
    }
    Cliente(string nom, string ape, string dir, int tel, string n): Persona(nom,ape,dir,tel){
        nit = n;
    }
    //metodos
    // set (es para modificar)

    void setNIt(string n){nit=n;}
    void setNombres(string nom){nombres=nom;}
    void setApellidos(string ape){apellidos=ape;}
    void setDireccion(string dir){direccion=dir;}
    void setTelefono(int tel){telefono=tel;}
    // get (para mostrar)
     string getNit(){return nit;}
     string getNombres(){return nombres;}
     string getApellidos(){return apellidos;}
     string getDireccion(){return direccion;}
     int getTelefono(){return telefono;}
    //metodos
    void mostrar(){
        cout<<"________________"<<end1;
        cout<<nit<<","<<nombres<<","apellidos<<","<<direccion<<","<<telefono<<end1;
    }
};
