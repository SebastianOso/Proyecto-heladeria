#include <iostream>

using namespace std;

class Helado_bote{
    private:
        int num_helados;
        float precio;
        string sabor;
        string tam; //tamanio chico/grande
        int caducidad; //dia/mes/anio
    public:
        //constructor default
        Helado_bote(){
            num_helados = 0;
            //precio = 63;
            sabor = "";
            tam = "";
            int meses = rand()%8 + 1;
            caducidad = meses;
        }
        //Getters
        string getSabor() {
            return sabor;
        }

        string getTam(){
            return tam;
        }

        int getCaducidad() {
            return caducidad;
        }

        //Setters

        void setSabor(string sab){
            sabor = sab;
        }

        void setTam(string tama){
            tam = tama;
        }


        void setNum_helado(int numh){
            num_helados = numh;
        }

        void imprimirDatos(){
            cout << "Número de helados " << num_helados << endl
                 << "Sabor: " << sabor << endl
                 << "Tamaño(ml): " << tam << endl
                 << "Tu helado Caduca en: " << caducidad << " meses" << endl;
                 //<< "Precio " << precio * num_helados << endl;
        }
        

};