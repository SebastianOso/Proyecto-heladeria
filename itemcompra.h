#ifndef ITEMCOMPRA_H
#define ITEMCOMPRA_H
#include <iostream>

using namespace std;

class Item{
    protected:

        string sabor;
        string tam;
        float precio;

    public:

        Item(string sab, string tami,float prec){
            sabor = sab;
            tam = tami;
            precio = prec;
        }
        
        string getSabor(){
            return sabor;
        }

        string getTam(){
            return tam;
        }
        
        float getPrecio(){
            return precio;
        }

        void setSabor(string sabi){
            sabor = sabi;
        }

        void setTam(string tama){
            tam = tama;
        }

        //metodos 

        virtual void imprimirInfo(){
            cout << "Sabor " << sabor << endl
                 << "Tamaño " << tam << endl
                 << "Precio " << precio << endl;
        }
};

#endif