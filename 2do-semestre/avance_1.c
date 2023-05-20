#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//Declaracion de las funciones
int menu();
int rock_sciossors_paper();
int guess_the_number();
int questions();
int test(); ///---> tipo de funcion  nombre_funcion();

int main(){
	
	int opc,puntos;
	questions();
	//menu(); //llamanando a la funcion de menu.

	return 0;
}
///_---------------------------------
int menu(){
	//Mostrando en pantalla el menu
	int opc;
	printf("--------------Menu--------------\n");
	printf("Piedra, papel o tijera : 1\n");
	printf("Adivina el numero : 2\n");
	printf("Coming soon \n");

	scanf("%d",&opc);


	switch(opc){
	case 1:
		//rock_sciossors_paper();
		questions();
		printf("Regresa de la funcion");
		break;

	}
	return 0;  
}
	
int rock_sciossors_paper(){
		int userchoice,computerchoice,minimo=1,maximo=3;
		bool validator=true;
		while(validator == false){
			printf("Piedra :: 1 \nPapel :: 2 \nTijera :: 3 \nElige: ");
			scanf("%d",&userchoice);
			system("cls");
			printf("Piedra :: 1 \nPapel :: 2 \nTijera :: 3 \n");
		
			srand(time(NULL)); //Inicializando la semilla del generador de rangos aleatorios.
			computerchoice = (rand() %(maximo - minimo) + 1);
			
			if (userchoice >3 && userchoice == 0){
				system("cls");
				printf("Parametro no valido, intente de nuevo\n");
				printf("Presiona para continuar.....");
				fflush(stdin);
				getchar();
				printf("Continuando\n");
			}
			else if(userchoice >= 1 && userchoice<4){
				//When it's a tie
				if(userchoice == computerchoice){
					printf("Empate \n");
					switch(userchoice){
					case 1:
						printf("Tu: Piedra \nComputadora: Piedra\n");
						break;
					case 2:
						printf("Tu: Papel\nComputadora: Papel\n");
						break;
					case 3:
						printf("Tu: Tijera\nComputadora: Tijera\n");
						break;
					}
				fflush(stdin);
				printf("Presiona Enter para continuar...");
				fflush(stdin);
    			getchar();
    			printf("Continuando...\n");
				}
				//When the computer wins
				else if(userchoice == 1 && computerchoice == 2){
					printf("%d",computerchoice);
					printf("Computer wins \n");
					printf("Presiona Enter para continuar...");
					fflush(stdin);
    				getchar();
	    			printf("Continuando...\n");
					validator = false;
					questions();
				}
				else if(userchoice == 2 && computerchoice == 3){
					printf("Computer wins\n");
					printf("Presiona Enter para continuar...");
					fflush(stdin);
    				getchar();
    				printf("Continuando...");
					validator = false;
					questions();
				}
				else if(userchoice == 3 && computerchoice == 1){
					printf("Computer wins\n");
					validator = false;
					printf("Presiona Enter para continuar...");
					fflush(stdin);
    				getchar();
    				printf("Continuando...\n");
					questions();
				}

				//When the user wins 
				else if(userchoice == 1 && computerchoice == 3){
					printf("User wins \n");
					printf("Presiona Enter para continuar...");
					fflush(stdin);
    				getchar();
    				printf("Continuando...\n");
				}
				else if(userchoice==2 && computerchoice==1){
					printf("User wins \n");
					printf("Presiona Enter para continuar...");
					fflush(stdin);
    				getchar();
    				printf("Continuando...\n");

				}
				else if(userchoice == 3 && computerchoice == 2){
					printf("User wins \n");
					printf("Presiona Enter para continuar...");
					fflush(stdin);
    				getchar();
    				printf("Continuando...\n");
				}
			}
			
			}
		
	return 0;

	}
int guess_the_number(){}
int test(){
	printf("Presiona Enter para continuar...");
    getchar();
    printf("Continuando...\n");
    menu();
}

int questions(){
	int random,answer,minimo =1, maximo = 3;
	printf("Pregunta aleatoria\n");
	printf("Press enter to continue...");
	getchar();
	srand(time(NULL)); 
	random = (rand() %(maximo - minimo) + 1);
	printf("%d",random);
	switch(random){
		case 1:
			system("cls");
			printf("\n***********Pregunta 1***********\n");
			printf("¿Cuantos bits equivale una variables de tipo entero?: ");
			scanf("%d",&answer);
			if (answer == 16){
				printf("\nCorrecto");
				printf("Presiona enter para continuar");
				getchar();
				menu();

			}
			else{
				printf("\nRespuesta incorrecta");
				printf("Presiona enter para continuar");
				getchar();
				menu();

			}
			break;
		case 2:
			system("cls");
			printf("***********Pregunta 2***********\n");
			printf("¿Cuando es la derivada de 1?");
			scanf("%d",&answer);
			if (answer == 0){
				printf("Correcto\n");
				printf("Presiona enter para continuar");
				getchar();
				menu();

			}
			else{
				printf("Incorrecto\n");
				printf("Respuesta correcta : 0\n");
				printf("Presiona enter para continuar");
				getchar();
				menu();

			}

			break;
		case 3: 
			system("cls");
			printf("***********Pregunta 3***********\n");
			printf("Derivada de x^2\n");
			scanf("%d",&answer);
			if (answer == 2){
				printf("Correcto\n");
				printf("Presiona enter para continuar");
				getchar();
				menu();
			}
			else{
				printf("Incorrecto\n");
				printf("Respuesta correcta : 2\n");
				printf("Presiona enter para continuar");
				getchar();
				menu();
			}
			break;
		case 4:
			system("cls");
			printf("****************pregunta 4********************\n");
			
			return 0;
	}
}

