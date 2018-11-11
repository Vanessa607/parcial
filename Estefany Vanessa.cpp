//UNIVERSIDAD DE EL SALVADOR -------------PROGRAMACION I -------------------------------
//ING. LIGIA ASTRID
//ALUMNA:  ESTEFANY VANESA CERRITOS ZELAYA
//ESTE PROGRAMA SIMULA RENTA DE CARROS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int c[9]={0,0,0,0,0,0,0,0,0};
char denuevo=' ';


char opcion(int i);
int ganador(), quieres, rentado; //Variables de eleccion de carros
void print_rentado(); //Imprime el carro que esta en estado de renta
void datos(); //pide los datos del cliente
void proceso();//imprime los carros que estan en renta

int main()
{
do
{
    int h, menu;
    cout<<"			BIENVENIDO RENTA DE AUTOS ESTEFANY\n";
    cout<<"		1)Realizar Renta\n";
	cout<<"		2)Ver carros disponibles\n";
	cout<<"		3)carros arrendados\n";
	cout<<"		4)Salir\n";
	
	
	cin>>menu;

    switch(menu)
    {
         case 1:
			 datos();
						
				break;
           	case 2:
           		if(quieres==1){
				
				cout<<"CARROS DISPONIBLES\n";
              	  	cout<<"2- Sedan 4 puertas \n";
				  	cout<<"3- pickup \n";
		  		  	cout<<"4- mini van \n";	
				   system("todos1.png");
				   }else if(quieres==2){
				   	
				cout<<"CARROS DISPONIBLES\n";
              		cout<<"1- sedan 2 puertas \n";
			  		cout<<"3- pickup \n";
		  		 	cout<<"4- mini van \n";
				   system("todos2.png");
				   
				   }else if(quieres==3){
				cout<<"CARROS DISPONIBLES\n";
				cout<<"1- sedan 2 puertas \n";
			  	cout<<"2- sedan 4 puertas \n";
			   	cout<<"4- mini van\n";
				system("todos3.png");
				  }else if(quieres==4){

				cout<<"CARROS DISPONIBLES\n";
				cout<<"1- sedan 2 puertas \n";
			  	cout<<"2- sedan 4 puertas \n";
			  	cout<<"3- pickup \n";
			  	   system("todos4.png");
				 }else{
			  	   	
					cout<<"CARROS DISPONIBLES\n";
              		cout<<"1- sedan 2 puertas \n";
			  		cout<<"2- sedan 4 puertas \n";
			  	  	cout<<"3- pickup \n";
			  	 	cout<<"4- mini van \n";
				system("todos.png");
     
				   }
			  getchar();
              break;
           	case 3:
              	
				cout<<"LOS CARROS RENTADOS \n \n";
       	
	proceso();
              getchar();
              break;
            case 4: //salir
               
               cout<<"Hasta pronto\n";
               
			   getchar();
               exit(1);
              break;
         }
         
         cout<<"\nDesea regresar al menu? (s o n)\n";
         
         cin>>denuevo;
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='s')&&(denuevo!='n'))
         for (h=0;h<=8;h++) c[h]=0;
}
while (denuevo=='S');
getchar();

}
void datos() //formulario para rentar carros
{
  int dui,licencia,vivienda,tel,precio;
  char nombre[50];
	 
	 cout<<"Ingrese el numero de carro a rentar\n";
	 	cin>>quieres;
	 cout<<"Ingrese el nombre del usuario\n";
     	cin>>nombre;
     cout<<"Ingrese el numero de DUI \n";
     	cin>>dui;
     cout<<"Ingrese el costo del arendamiento \n";
	 	cin>>precio;
			}

void proceso()// Esta funcion determina que carro esta en estado de renta
{
if(quieres==1){

	cout<<"sedan 2 puertas \n";

	system("1.png");
	
}else if(quieres==2){

	cout<<"sedan 4 puertas\n";

	system("2.png");
}else if(quieres==3){
	
	cout<<"pickup\n";
	
	system("3.png");
}else if(quieres==4){
	
	cout<<"mini van \n";
	
	system("4.png");
}else{
	
	cout<<"No hay carros en renta\n\n";
	
	}

rentado=quieres;
}


