#ifndef HELADO_H
#define HELADO_H

#include <iostream>
#include "itemcompra.h"

using namespace std;

class Helado_bote:public Item{
    private:
        //int num_helados;
        int caducidad; //dia/mes/anio
    public:
        //hacer constructor con parametros
        Helado_bote(string sab,string tam):Item(sab,tam,60){
            int meses = rand()%8 + 1;
            caducidad = meses;
        }
        //Getters
        int getCaducidad() {
            return caducidad;
        }

        //Setters

        //metodos

        void imprimirInfo(){
            cout << "Helado:" << endl
                 << "Sabor " << sabor << endl
                 << "Tamaño " << tam << endl
                 << "Caduca en " << caducidad <<" meses" << endl
                 << "-----------------" << endl;
        }


};

#endif