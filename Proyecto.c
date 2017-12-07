# Proyecto_Final

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void formato(); 
void time();
void pregunta();
int correcta,rep, cuenta, n=0;

int main()
{
	FILE *archivo;
	int i, opcion, puntaje = 0;  
	//Llama a la función formato la cual impirme el esqueleto del examen y pide el número de cuenta al usuario.
	formato();  
	
	//Si el número de cuenta ingresado es diferente a los contenidos en el archivo "Presentados.txt", se realizará lo siguiente      
	if(n!=cuenta)     
	{
		//Se imprime el número de cuneta en un archivo de texto "Presentados.txt"
		archivo = fopen("Presentados.txt", "a"); 
	    fprintf(archivo, "%d\n", cuenta);
	    fclose(archivo);	
		
		//Se ejecutaran la función pregunta 10 veces.
		for(i=1;i<11;i++) 
		{
			printf("%d) ",i);
			pregunta();
			printf("\n \n");
			
			//Pide al usuario ingresar la opcion que crea sea la correcta.
			printf("Ingresa el numero de opcion correcta: ");
			scanf(" %d", &opcion);                                 
			printf("\n \n");
			
			//Verifica si la opcion ingresada por el usurio coincide con la respuesta correcta.
			if (opcion==correcta) 
			{
				puntaje++;       
			}	
		}
		archivo=fopen("Random.txt","w");
	    fclose(archivo);
	    
		 //Imprime la calificación del usuario.
		printf("\n \n");
		printf("Calificacion: %d",puntaje); 
		printf("\n \n \n");
		printf("  			Fin de Examen				  \n");
	}
   
    else
    {
    	//Si el número de cuenta ingresado ya se encuentra en el archivo "Presentados.txt" no se permitirá que se realice el examen.
    	printf("Ya has realizado el examen"); 
		 
	}

	return 0;
}

//Función que contiene el esqueleto del examen y pide al usuario su número de cuenta.
void formato() 
{	
	FILE *archivo;
	printf("==========================================================\n");
	printf("<<							>>\n");
	printf("<<			EXAMEN				>>\n");
	printf("<<							>>\n");
	printf("==========================================================\n");
	printf("\n");
	
	//LLama a la función que imprime la fecha y hora de aplicación del examen.
	time(); 
	
	printf("\n");
	printf("Ingresa tu cuenta: ");
	scanf(" %d", &cuenta); //Pide al ususrio su número de cuenta.
	printf("\n");
	
	//Lee el archivo donde se guardarán los números de cuenta de aquello slaumnos que realicen el examen.
	archivo = fopen("Presentados.txt", "r"); 
	while(!feof(archivo))
	{
		//Guarda en la variable n los núemros de cuenta que encuentre en "Presentados.txt
		fscanf(archivo, "%d", &n); 
	}
	
}

//Función que imprime la fecha y hora de aplicación del examen.
void time() 
{
	char buff[100];
    time_t now = time (0);
    strftime (buff, 100, "%Y-%m-%d %H:%M", localtime (&now));
    printf ("					  %s\n", buff);
}

 //Funcion que alternará entre 30 preguntas.
void pregunta()
{
	FILE *archivo;
	char letra;
	int randomnumber=0;
	
	srand(time(NULL)); //Genereando un número aletorio para el manejo de las preguntas.
	randomnumber = 1 + rand() % (31-1);
	archivo=fopen("Random.txt","r");
    while(!feof(archivo))
    {
    	fscanf(archivo, "%d", &rep);
    	while(randomnumber==rep)
    	{
    		randomnumber = 1 + rand() % (31-1);	
		}
	}
	fclose(archivo);
	archivo=fopen("Random.txt","a");
	fprintf(archivo, "%d\n", randomnumber);
	fclose(archivo);
    
		//Alterna el número aletorio y se le asigna una pregunta para su leectura.
		switch (randomnumber) 
		{
			case 1:
			archivo = fopen("P1.txt", "r");
			correcta=2;
			break;
			case 2:
			archivo = fopen("P2.txt", "r");
			correcta=4;
			break;
			case 3:
			archivo = fopen("P3.txt", "r");
			correcta=4;
			break;
			case 4:
			archivo = fopen("P4.txt", "r");
			correcta=2;
			break;
			case 5:
			archivo = fopen("P5.txt", "r");
			correcta=1;
			break;
			case 6:
			archivo = fopen("P6.txt", "r");
			correcta=3;
			break;
			case 7:
			archivo = fopen("P7.txt", "r");
			correcta=3;
			break;
			case 8:
			archivo = fopen("P8.txt", "r");
			correcta=1;
			break;
			case 9:
			archivo = fopen("P9.txt", "r");
			correcta=3;
			break;
			case 10:
			archivo = fopen("P10.txt", "r");
			correcta=3;
			break;
			case 11:
			archivo = fopen("P11.txt", "r");
			correcta=1;
			break;
			case 12:
			archivo = fopen("P12.txt", "r");
			correcta=1;
			break;
			case 13:
			archivo = fopen("P13.txt", "r");
			correcta=1;
			break;
			case 14:
			archivo = fopen("P14.txt", "r");
			correcta=4;
			break;
			case 15:
			archivo = fopen("P15.txt", "r");
			correcta=3;
			break;
			case 16:
			archivo = fopen("P16.txt", "r");
			correcta=4;
			break;
			case 17:
			archivo = fopen("P17.txt", "r");
			correcta=2;
			break;
			case 18:
			archivo = fopen("P18.txt", "r");
			correcta=1;
			break;
			case 19:
			archivo = fopen("P19.txt", "r");
			correcta=4;
			break;
			case 20:
			archivo = fopen("P20.txt", "r");
			correcta=2;
			break;
			case 21:
			archivo = fopen("P21.txt", "r");
			correcta=3;
			break;
			case 22:
			archivo = fopen("P22.txt", "r");
			correcta=3;
			break;
			case 23:
			archivo = fopen("P23.txt", "r");
			correcta=2;
			break;
			case 24:
			archivo = fopen("P24.txt", "r");
			correcta=1;
			break;
			case 25:
			archivo = fopen("P25.txt", "r");
			correcta=4;
			break;
			case 26:
			archivo = fopen("P26.txt", "r");
			correcta=3;
			break;
			case 27:
			archivo = fopen("P27.txt", "r");
			correcta=2;
			break;
			case 28:
			archivo = fopen("P28.txt", "r");
			correcta=3;
			break;
			case 29:
			archivo = fopen("P29.txt", "r");
			correcta=2;
			break;
			case 30:
			archivo = fopen("P30.txt", "r");
			correcta=4;
			break;
		}
	
	//Lee los archivos que continien las preguntas y los imprime.
	while(!feof(archivo)) 
	{
		letra=fgetc(archivo);    
	    printf("%c",letra);
	}
 
	fclose(archivo);		
}
