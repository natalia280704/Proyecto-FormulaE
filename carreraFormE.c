/**

 * @file carreraFormE.c
 * 
 * @brief Simulador de carreras de Fórmula E en C. 
 * 
 * @details Este programa es el proyecto final que simula realizar una carrera de Fórmula E.
 *
 * @author Programa creado por: Diego Bravo Pérez
 * 
 * @date Fecha de creación: 10 de Noviembre del 2022
 * 
 * @author Último en modificar: Diego Bravo Pérez
 *
 * @date Última fecha de creación: 10 de Noviembre del 2022
 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void mostrarInstrucciones(char instrucciones[], char author[]);
int ingresarRangoNum(int limInf, int limSup);
void limpiarBufer(void);
int generarAleatorio(int inicio, int final);
void menuCatal(void);

/**

 @fn Función principal
 @return Integer:0, indica que el programa se ejecuto de manera correcta

 */


int main (void)
{
  int opcion;
  
  mostrarInstrucciones("Este programa es el proyecto final que simula realizar una carrera de Fórmula E.", "Diego Bravo Pérez");

  do
    {
      printf("Menú principal:\n\n");
      printf("\t1) Catálogo.\n");
      printf("\t2) Simulador de carreras.\n");
      printf("\t3) Resultado de carrera anterior.\n");
      printf("\t4) Salir.\n");
      printf("\n");

      opcion = ingresarRangoNum(1, 4);

      switch(opcion)
      {
      case 1:
	system("clear");
	menuCatal();
	break;

      case 2:
	system("clear");
	break;

      case 3:
	system("clear");
	break;

      case 4:
	system("clear");
	break;
      }

    } while(opcion != 4);
  
  return 0;
}

/**

  @fn Procedimiento que muestra las instrucciones del programa
  @param String:instrucciones, String;autor
 
 */

void mostrarInstrucciones(char instrucciones[], char author[])
{
  printf("\nIntrucciones:\n\t%s\n\n", instrucciones);
  printf("Autor:\n\t%s\n\n", author);

  printf("Presione la tecla \"enter\" para continuar.\n");
  getchar();

  system("clear");

  return;
}

/**
   @fn Función que pide un número entero dentro de un rango de números.
   @param Integer:limInf, Integer:limSup
   @return Integer:numero (válido)
*/

int ingresarRangoNum(int limInf, int limSup)
{
  int numero, validar;
  float R;

  do
    {
      printf("Ingresa una opción (%d a %d): ", limInf, limSup);

      validar = scanf(" %f", &R);

      limpiarBufer();

      numero = R;

	if (numero != R)
	  {
	    validar = 0;
	  }

      if (numero < limInf || numero > limSup)
	{
	  printf("\a\nDebes ingresar una opción válida.\n\n");
	  validar = 0;
	}
    } while(validar == 0);

  return numero;
}

/**
   @fn FUnción para limpiar el bufer de memoria
*/

void limpiarBufer(void)
{
  int limpiar;

  while ((limpiar = getchar()) != '\n' && limpiar != EOF) {}

  return;
}

/**
   @fn Función que genera un número aleatorio con un rango predefinido
   @param Integer:inicio, Integer:final
   @return Integer:aleatorio
*/

int generarAleatorio(int inicio, int final)
{
  int aleatorio;

    aleatorio = inicio + rand() % (final - inicio + 1);

  return aleatorio;
}

/**
   @fn Función que muestra el menú del catálogo.
*/

void menuCatal(void)
{
  int opcion;

  do
    {
      printf("Catálogo:\n\n");
      printf("\t1) Carreras.\n");
      printf("\t2) Equipos.\n");
      printf("\t3) Países.\n");
      printf("\t4) Pilotos.\n");
      printf("\t5) Regresar a menú principal.\n");
      printf("\n");

      opcion = ingresarRangoNum(1, 5);

      switch(opcion)
      {
      case 1:
	system("clear");
	break;

      case 2:
	system("clear");
	break;

      case 3:
	system("clear");
	break;

      case 4:
	system("clear");
	break;

      case 5:
	system("clear");
	break;
      }

    } while(opcion != 5);
}
  
