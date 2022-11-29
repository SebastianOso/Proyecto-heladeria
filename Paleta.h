#include <iostream>
#include "itemcompra.h"
using namespace std;

class Paleta:public Item{
    private:
        string tipo; // si es paleta de leche o de agua
    public:
        //constructor default
        Paleta(string sab, string tam, string tip):Item(sab,tam,20){
            tipo = tip;
        }

        //Getters
        string getTipo() {
            return tipo;
        }

        //Setters

        void setTipo(string tip){
            tipo = tip;
        }

        //metodos

        void imprimirInfo(){
            cout << "Paleta:" << endl
                 << "Sabor " << sabor << endl
                 << "Tipo " << tipo << endl
                 << "-----------------" << endl;
        }



};
    