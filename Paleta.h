#include <iostream>

using namespace std;

class Paleta{
    private:
        int num_paletas;
        int precio;
        string sabor;
        string tipo; // si es paleta de leche o de agua
    public:
        //constructor default
        Paleta(){
            num_paletas = 0;
            //precio = 20;
            sabor = "";
            tipo = "";
        }

        //Getters
        string getSabor() {
            return sabor;
        }

        string getTipo() {
            return tipo;
        }

        //Setters

        void setSabor(string sab){
            sabor = sab;
        }


        void setTipo(string tip){
            tipo = tip;
        }

        void setNum_paleta(int nump){
            num_paletas = nump;

        }

        void imprimirDatos(){
            cout << "Número de paletas " << num_paletas << endl
                 << "Sabor: " << sabor << endl
                 << "Tipo : " << tipo << endl;
                 //<< "Precio " << precio * num_paletas << endl;
        }

};
    