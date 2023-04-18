#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declaracion de las funciones
int menu();
int rock_sciossors_paper();
int guess_the_number();


int main(){
	int opc;
	rock_sciossors_paper();
	//menu(); //llamanando a la funcion de menu.

	return 0;
}

int menu(){
	//Mostrando en pantalla el menu
	int opc;
	printf("--------------Menu--------------\n");
	printf("Piedra, papel o tijera : 1\n");
	printf("Adivina el numero : 2\n");
	printf("Coming soon");


	switch(opc){
	case 1:
		rock_sciossors_paper();
		break;

	}
	return 0;   }
int rock_sciossors_paper(){
		int userchoice,computerchoice,validator=1;
		while(validator==1){
			printf("Piedra :: 1 \n");
			printf("Papel :: 2 \n");
			printf("Tijera :: 3 \nElige: ");
			scanf("%d",&userchoice);
			system("cls");
			printf("Piedra :: 1 \n");
			printf("Papel :: 2 \n");
			printf("Tijera :: 3 \n");


			srand(time(NULL)); //Inicializando la semilla del generador de rangos aleatorios.
			computerchoice = rand() %4;
			printf("La computadora escogio: %d \n",computerchoice);
	
			if (userchoice >3 && userchoice == 0){
				system("cls");
				printf("Parametro no valido, intente de nuevo");
			}
			else if(userchoice >= 1 && userchoice<4){
				if(userchoice == 1 && computerchoice == 1){
					printf("Empate ");
				}
			}
			
	}
	return 0;

	}
int guess_the_number(){}

