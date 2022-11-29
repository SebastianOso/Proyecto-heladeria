#ifndef TICKET_COMPRA_H
#define TICKET_COMPRA_H


#include <iostream>
#include <vector>

#include "itemcompra.h"

using namespace std;

class Ticket {
    private:
    vector<Item*> items;

    public:
    Ticket() {
        //ya se inicializo el vector vacio 
    }

    vector<Item*> getItems(){
        return items;
    }

    //métodos
    void agregaritem(Item* tem){
        items.push_back(tem);
    }

    void imprimirInfo(){

        for (int i=0; i < items.size(); i++){//hacer un metodo de imprimir información de items
        items[i]->imprimirInfo();//dibujar es el metodo de la clase de items que imprime la información del item
        }
    }


};

#endif