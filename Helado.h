#include <iostream>

using namespace std;

class Helado_bote{
    private:
        int num_helados;
        //int precio;
        string sabor;
        int tam; //tamanio en mililitros
        string caducidad; //dia/mes/anio
    public:
        //constructor default
        Helado_bote(){
            num_helados = 0;
            //precio = 63;
            sabor = "";
            tam = 500;
            int meses = rand()%8+1;
            caducidad = meses;
        }
        //Getters
        string getSabor() {
            return sabor;
        }

        int getTam(){
            return tam;
        }

        string getCaducidad() {
            return caducidad;
        }

        //Setters

        void setSabor(string sab){
            sabor = sab;
        }

        void setTam(int tama){
            tam = tama;
        }

        void setCaducidad(string cad){
            caducidad = cad;
        }
        void setNum_helado(int numh){
            num_helados = numh;
        }

        void imprimirDatos(){
            cout << "Número de helados " << num_helados << endl
                 << "Sabor: " << sabor << endl
                 << "Tamaño(ml): " << tam << endl
                 << "Caduca en: " << caducidad << " meses" << endl;
                 //<< "Precio " << precio * num_helados << endl;
        }
        

};