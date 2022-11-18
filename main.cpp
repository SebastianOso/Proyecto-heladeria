#include <iostream>

#include "compra.h"

using namespace std;



/*
funcion de menu
int menu(){

    int opcion_menu;
    cout << "¿Que quieres comprar?" << endl
         << "1.- Malteada" << endl
         << "2.- Helado" << endl
         << "3.- Paleta" << endl
         << "4.- Imprimir Ticket" << endl
         << "5.- no comprar nada";

    cin >> opcion_menu;
    
    return opcion_menu;
}

void imprimirTicket(){
*/    



int main(){

     

    //menu();
    //int opcion;
    //opcion = menu();

    //hacer un switch para ver que quiere preguntar si es que se puede hacer lo del switch
    //poner el objeto creado afuera o dentro del switch


     Compra compra;

    Malteada ordenMalteada;
//pedir sabor malteada (no funciona ya que las funciones de la clase compra no tienen ninguna operación dentro, pero estan en prototipo)
    string saborMalteada;
    cout << "Que sabor quieres de malteada" << endl
         << "Chocolate" << endl
         << "Vainilla" << endl
         << "Fresa" << endl
         << "Oreo" << endl;
    cin >> saborMalteada;
    compra.setSaborMalteada(saborMalteada, ordenMalteada);
//pedir tamaño de la malteada
    string tamMalteada;
    cout << "De que tamaño deseas tu malteada" << endl
         << "Chica(500ml)" << endl
         << "Grande(1000ml)" << endl;
    cin >> tamMalteada;
    compra.setTamMalteada(tamMalteada, ordenMalteada);
//pedir si lleva crema batida
    string crema_batida;
    cout << "Quieres crema batida en tu malteada(s/n) " << endl;
    cin >> crema_batida;
    compra.setCremabatida(crema_batida, ordenMalteada);

    //ordenMalteada.setNumero_malteadas(2); preguntar al profe como pedir pedir varias malteadas de diferente sabor
    ordenMalteada.imprimirDatos(); //imprime tu orden de malteada, ahorita solo es para verificar si todo se hace bien, ya que al final se imprime la orden completa

    Helado_bote ordenHelado;

//pedir sabor de helado 
    string saborHelado;
    cout << "Que sabor quieres de helado" << endl
         << "Chocolate" << endl
         << "Vainilla" << endl
         << "Fresa" << endl
         << "Oreo" << endl
         << "Napolitano" << endl;
    cin >> saborHelado;
    compra.setSaborHelado(saborHelado, ordenHelado);
//pedir el tamanio del helado
    string tamHelado;
    cout << "De que tamaño deseas tu bote de helado" << endl
         << "Chico(500ml)" << endl
         << "Grande(1000ml)" << endl;
    cin >> tamHelado;
    compra.setTamHelado(tamHelado, ordenHelado);
        
    //chocolate.setNum_helado(3);

    ordenHelado.imprimirDatos(); //imprime tu orden de helado

    Paleta ordenPaleta;

    string saborpaleta;
    cout << "Que sabor quieres tu paleta" << endl
         << "Chocolate" << endl
         << "Vainilla" << endl
         << "Fresa" << endl
         << "Oreo" << endl
         << "Napolitano" << endl;
    cin >> saborpaleta;
    compra.setSaborPaleta(saborpaleta, ordenPaleta);

    string tipoPaleta;
    cout << "De que tipo es tu paleta" << endl
         << "Leche" << endl
         << "Agua" << endl;
    cin >> tipoPaleta;

    compra.setTipoPaleta(tipoPaleta,ordenPaleta);

    //fresa.setNum_paleta(1);

    ordenPaleta.imprimirDatos(); //imprime tu orden de paletas

    //cout << "El total es: " << compra.totaldecompra() << endl; (esto imprime el total de compra, pero no tiene nada adentro la funcion)
    //compra.imprimir_ticket(); (lo mismo para esto)

    return 0;
}