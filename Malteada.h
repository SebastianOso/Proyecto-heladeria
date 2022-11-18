#include <iostream>

using namespace std;


class Malteada{
    private:
        string sabor;
        string tam; //tamanio en litros
        string crema_batida; // pregunta de s/n
        int num_malteadas;  
        float precio; //poner precio de malteada y que no se pueda cambiar
        
    public:
        //constructor default
        Malteada(){
            num_malteadas = 0;
            //precio = 20;
            tam = "";
            sabor = "";
            crema_batida = "n";
        }
        //Getters
        string getSabor() {
            return sabor;
        }

        string getTam(){
            return tam;
        }

        string getCremaBatida() {
            return crema_batida;
        }

        int getNum_malteadas(){
            return num_malteadas;
        }

        //Setters

        void setSabor(string sab){
            sabor = sab;
        }

        void setTam(string tama){
            tam = tama;
        }

        void setCremaBatida(string crema){
            crema_batida = crema;
        }

        void setNumero_malteadas(int numm){
            num_malteadas = numm;
        }

        void imprimirDatos(){
            cout << "Número de malteadas " << num_malteadas << endl
                 << "Sabor: " << sabor << endl
                 << "Crema Batida: " << crema_batida << endl
                 << "Tamaño(ml): " << tam << endl;
                 //<< "Precio " << precio * num_malteadas << endl;


        }


};