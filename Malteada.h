#ifndef MALTEADA_H
#define MALTEADA_H
#include <iostream>
#include "itemcompra.h"

using namespace std;


class Malteada: public Item{
    private:
        string crema_batida; // pregunta de s/n
        
    public:
        //constructor default
        Malteada(string crema,string sab,string tam):Item (sab, tam, 40){
            crema_batida = crema;
        }
        
        //Getters

        string getCremaBatida(){
            return crema_batida;
        }


        //Setters


        void setCremaBatida(string crema){
            crema_batida = crema;
        }

        //metodos

        void imprimirInfo(){
            cout << "Malteada:" << endl
                 << "Sabor " << sabor << endl
                 << "Tamaño " << tam << endl
                 << "Crema batida " << crema_batida << endl
                 << "-----------------" << endl;
        }
      

};

#endif