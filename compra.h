#include <iostream>
#include "Helado_bote.h"
#include "Paleta.h"
#include "Malteada.h"


using namespace std;


class Compra{
    private:
        Malteada malteada;
        Helado_bote Helado;
        Paleta paleta;
    public:
        //metodos de malteada
        //setters
        void setSaborMalteada(string sabm, Malteada &malteada){ //le setteas el sabor de malteada
        malteada.setSabor(sabm);
        }
        void setTamMalteada(string tamm,Malteada &malteada){   //le setteas el tamaño
        malteada.setTam(tamm);
        }
        void setCremabatida(string crema,Malteada &malteada){  //le setteas si lleva o no crema batida(s/n)
        malteada.setCremaBatida(crema);
        }
        void setNumMalteada(int numm);         //le setteas el numero de malteadas a comprar
        float totalMalteada(int tnumm);       //le setteas el total a pagar por las malteadas desde la clase compra

        //getters
        string getSaborMalteada(){ //obtienes el sabor de malteada
            return malteada.getSabor();
        }
        string getTamMalteada(){
            return malteada.getTam();
        }   //obtienes el tamaño
        string getCremabatida(){
            return malteada.getCremaBatida();
        }  //obtienes si lleva o no crema batida(s/n)
        int getNumMalteada();         //obtienes el numero de malteadas a comprar
        float getTotalMalteada();  


        //metodos de helado
        //setters
        void setSaborHelado(string sabh, Helado_bote &helado){
            helado.setSabor(sabh);
        }   //le setteas el sabor de helado
        void setTamHelado(string tamh,Helado_bote &helado){
            helado.setTam(tamh);
        }     //le setteas el tamaño de helado
        int setNumHelado(int numh);           //le setteas el numero de helados a comprar
        float totalHelado(int tnumh);         //le setteas el sabor de helado

        //getters
        string getSaborHelado(){
            return Helado.getSabor();
        }   //obtienes el sabor de helado
        string getTamHelado(){
            return Helado.getTam();
        }     //obtienes el tamaño de helado
        int getNumHelado(int numh);           //obtienes el numero de helados a comprar
        float getTotalHelado(int tnumh);      //obtienes el sabor de helado

        //metodos de paleta
        //setters
        void setSaborPaleta(string sabp, Paleta &paleta){
            paleta.setSabor(sabp);
        }
        void setTipoPaleta(string tipo, Paleta &paleta){
            paleta.setTipo(tipo);
        }

        //getters
        string getSaborPaleta(){
            return paleta.getSabor();
        }
        string getTipoPaleta(){
            return paleta.getTipo();
        }

        //metodos de la compra
        float totaldecompra();
        void imprimir_ticket();


};