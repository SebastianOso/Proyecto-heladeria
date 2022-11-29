# Proyecto-poo "Heladería"

Contexto

Este proyecto consiste en ayudar a un heladería a registrar la compra de un usuario, en esta heladería se puede comprar:

+Malteadas
  -Tamaño
  -Precio
  -Sabor
  -Crema batida
  
+Paletas
  -Precio
  -Sabor
  -Tipo

+Bote de helado
  -Tamaño
  -Precio
  -Sabor
  -Caducidad

Por lo que al usuario se le preguntara que producto quiere comprar y se le preguntaran las diferentes especificaciones del producto(Tamaño, Precio, Sabor etc.) y cuando el usuario termine su compra, al final se imprima un ticket, el cual le informa al usuario todo lo compro, al igual que las especificaciones de lo que compro, también se le calculara el total dependiendo de cuantos productos haya comprado

Como funciona:

Este codigo esta hecho en c++ y se compila con: "g++ Helado.h Paleta.h Malteada.h ticket_compra.h itemcompra.h main.cpp"

Dentro del main, se le va pidiendo al usuario que es lo quiere comprar si un bote de helado, paleta o una malteada, 
después de que haya seleccionado su opción, se le va a pedir que ingrese las dierentes especiicaciones del producto(Tamaño, Precio, Sabor etc.) y este proceso sigue hasta que el usuario marque "2" en la pregunta "¿Desea seguir comprando?" y se le desplegara su ticket






