#include <iostream>

using namespace std;



class Malteada{
    private:
        string sabor;
        int tam; //tamanio en litros
        string crema_batida; // pregunta de s/n
        int num_malteadas;  
        //int precio;
        
    public:
        //constructor default
        Malteada(){
            num_malteadas = 0;
            //precio = 20;
            tam = 500;
            sabor = "";
            crema_batida = "n";
        }
        //Getters
        string getSabor() {
            return sabor;
        }

        int getTam(){
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

        void setTam(int tama){
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