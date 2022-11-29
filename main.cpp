#include <iostream>
#include "Malteada.h"
#include "Helado.h"
#include "Paleta.h"
#include "ticket_compra.h"

using namespace std;

int main(){
     //se crea una instancia en la clase ticket para después imprimir toda la compra de la personaa
     Ticket ticket;

     //se crean contadores de cuantas paletas va a comprar la persona
     int contador_paleta=0;
     int contador_malt=0;
     int contador_hel=0;

     /*
     variable para inicializar el menú de lo que quiere pedir la persona
     que más adelante si el usuario ya no quiere ordenar solo se cambia la variable ciclo a 0
     */
     int ciclo = 1;
     while (ciclo == 1){

          //opciones del menu
          int opcion;
          cout << "¿Que quieres comprar?" << endl
               << "1.- Malteada" << endl
               << "2.- Helado" << endl
               << "3.- Paleta" << endl
               << "4.- Salir" << endl;
          cin >> opcion; 


          //dependiendo de que escogio el usuario suceden diferentes cases
          switch (opcion)
          {

               case 1:{

                    /*
                    Aqui se usa un pointer de malteada y un new, ya que como estamos dentro de un ciclo
                    se pueden generar malteadas infinitas por lo tanto se usa el pointer, y el new lo uso porque
                    esto hace que se guarde esa malteada hasta que yo la quiera borrar pero en este caso no la quiero
                    borrar para imprimir la orden completa
                    */
                    Malteada* malteada= new Malteada("","","");  
                    //pedir sabor malteada (no funciona ya que las funciones de la clase compra no tienen ninguna operación dentro, pero estan en prototipo)
                    string saborMalteada;
                    cout << "Que sabor quieres de malteada" << endl
                         << "Chocolate" << endl
                         << "Vainilla" << endl
                         << "Fresa" << endl
                         << "Oreo" << endl;
                    cin >> saborMalteada;
                    //aqui lo mismo se tuvo que usar un pointer porque con .setSabor no funcionaria
                    malteada->setSabor(saborMalteada);


                    /*
                    En las siguientes lineas de código se hace lo mismo de usar el pointe en los setter                    
                    */

                    //pedir tamaño de la malteada
                    string tamMalteada;
                    cout << "De que tamaño deseas tu malteada" << endl
                         << "Chica(500ml)" << endl
                         << "Grande(1000ml)" << endl;
                    cin >> tamMalteada;
                    malteada->setTam(tamMalteada);

                    //pedir si lleva crema batida
                    string crema_batida;
                    cout << "Quieres crema batida en tu malteada(s/n)" << endl;
                    cin >> crema_batida;
                    malteada->setCremaBatida(crema_batida);

                    //aqui se agrega el objeto de malteada en el metodo de agrearitem que este lo mete en un vector
                    ticket.agregaritem(malteada);
                    contador_malt++;//se suma 1 al contador para desplegar la cuenta de cuantas malteadas
                                    //compro y así multiplicarlas por el precio y dar el total
                    break;
               }

               //en los demás cases se repite lo que paso en el case 1 pero con las clases de Helado_bote y Paleta

               case 2:{

                    Helado_bote* helado= new Helado_bote("","");

                    //pedir sabor de helado 
                    string saborHelado;
                    cout << "Que sabor quieres de helado" << endl
                        << "Chocolate" << endl
                        << "Vainilla" << endl
                        << "Fresa" << endl
                        << "Oreo" << endl
                        << "Napolitano" << endl;
                    cin >> saborHelado;
                    helado->setSabor(saborHelado);

                    //pedir el tamanio del helado
                    string tamHelado;
                    cout << "De que tamaño deseas tu bote de helado" << endl
                        << "Chico(500ml)" << endl
                        << "Grande(1000ml)" << endl;
                    cin >> tamHelado;
                    helado->setTam(tamHelado);

                         ticket.agregaritem(helado);

                         contador_hel++;

                    break;

               }

               case 3:{

                    Paleta* paleta= new Paleta("","","");

                    string saborpaleta;
                    cout << "Que sabor quieres tu paleta" << endl
                        << "Chocolate" << endl
                        << "Vainilla" << endl
                        << "Fresa" << endl
                        << "Oreo" << endl
                        << "Napolitano" << endl;
                    cin >> saborpaleta;
                    paleta->setSabor(saborpaleta);

                    string tipoPaleta;
                    cout << "De que tipo es tu paleta" << endl
                        << "Leche" << endl
                        << "Agua" << endl;
                    cin >> tipoPaleta;

                    paleta->setTipo(tipoPaleta);

                    ticket.agregaritem(paleta);

                         contador_paleta++;

                    break;
               }

               case 4:{
                    cout << "Nos vemos pronto" << endl;    
                    ciclo = 2;
               }


          default:

               break;
          }

          int seguir;
          cout << "¿Desea seguir comprando?" << endl
               << "1-Sí" << endl 
               << "2-No" << endl
               << "Escoga un numero" << endl;
          cin >> seguir;

          switch (seguir){
               case 1:{
                    continue;     
               }

               case 2:{
                    cout << "Nos vemos pronto" << endl;    
                    ciclo = 2;

                    //con lo siguiente se imprime toda la información de los distintos productos que compro el usuario
                    cout << "Orden:" << endl;
                    ticket.imprimirInfo();

                    int totalm;
                         totalm = contador_malt*40;
                    int totalp;
                         totalp = contador_paleta*20;
                    int totalh;
                         totalh = contador_hel*60;

                    int cuentaTotal;
                         cuentaTotal = totalh + totalm + totalp;

                    if (contador_malt==0){
                         cout << "No se compraron malteadas" << endl;
                    }
                    else{
                         cout << "Total malteada " << totalm << endl;
                    }

                    if (contador_hel==0){
                         cout << "No se compraron helados" << endl;
                    }
                    else{
                         cout << "Total helado " << totalh << endl;
                    }

                    if (contador_paleta==0){
                         cout << "No se compraron paletas"<< endl;
                    }
                    else{
                         cout << "Total paletas " << totalp << endl;
                    }

                    cout << "TOTAL A PAGAR: $" << cuentaTotal;
               }

               default:{
                    break;
               }
               
          }

         return 0;

     }

}