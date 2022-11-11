#include <iostream>
#include "Helado.h"
#include "Paleta.h"
#include "Malteada.h"

using namespace std;


//hacer una clase con la compra

int main(){

    Malteada vainilla;
    vainilla.setSabor("Vainilla");
    vainilla.setTam(500);
    vainilla.setCremaBatida("s");
    vainilla.setNumero_malteadas(2);

    vainilla.imprimirDatos(); //imprime tu orden de malteada


    Helado_bote chocolate;
    chocolate.setSabor("Chocolate");
    chocolate.setTam(1000);
    chocolate.setCaducidad("10/06/2023");
    chocolate.setNum_helado(3);

    chocolate.imprimirDatos(); //imprime tu orden de helado

    Paleta fresa;
    fresa.setSabor("fresa");
    fresa.setTipo("leche");
    fresa.setNum_paleta(1);

    fresa.imprimirDatos(); //imprime tu orden de paletas

    return 0;
}