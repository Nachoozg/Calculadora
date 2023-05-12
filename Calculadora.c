/*Nombre del programa: IgnacioZaldo_calculadora.c
 * Descripción: este es un programa que sirve para poder sumar,restar,multiplicar y dividir dos números que se piden a la persona que utiliza el programa. Primero pide uno de los dos números con los que se va a operar, despúes pide el signo o la operación que se quiere hacer (por ejemplol la suma y habría que introducir el signo +) y por último pide el otro número para poder operar.
 * Autor: Ignacio Zaldo González
 * Fecha: 08/03/2022
 * Versión: 1.0
 * Lista de versiones: 1.0
 * */
#include<stdio.h>                                                                  //Directiva para el procesador para precompilar
void Leernumero(int *num1);                                                        //Prototipo de función para leer un número de tipo procedimiento
void EscribirResultado(int num1,int num2,char operador,float *resultado);          //Prototipo de función para escribir el resultado de la operación tipo procedimiento
void VerOperador(char *operador);                                                  //Prototipo de función para ver el tipo de operador de tipo procedimiento
void Sumar(int num1,int num2,int *suma);                                           //Prototipo de función para sumar de tipo procedimiento
void Restar(int num1,int num2,int *restar);                                        //Prototipo de función para restar de tipo procedimiento
void Multiplicar(int num1,int num2,int *multiplicar);                              //Prototipo de función para multiplicar de tipo procedimiento
void Dividir(int num1,int num2,float *dividir);                                    //Prototipo de función para leer un número de tipo procedimiento
int main(){
	int num1,num2;                                                             //Declaración de variables
	float resultado;                                                           //Creo una variable de un número fraccionario
	char operador;                                                             //Creo una variable de tipo char
	Leernumero(&num1);                                                         //Llamada a la función de leer un número
	VerOperador(&operador);                                                    //LLamada a la función de ver el operador 
	Leernumero(&num2);                                                         //LLamada de nuevo a introducir otro número
	EscribirResultado(num1,num2,operador,&resultado);                          //LLamada a la función de escribir el resultado
	printf("Resultado:%f\n",resultado);                                        //El printf es para imprimir por pantalla el resultado de la operación
	return 0;
}
/*Nombre de función:Leernumero
 * Descripción:En esta función pido un número con printf y el usuario lo introduce con el scanf, con esto lo que hago es una vez ejecutando el programa que me pida un número
 * Argumentos de entrada: Printf es un parámetro de entrada 
 * Retorno: los scanf son parámetros de salida que piden un número
 * */
void Leernumero(int *num1){
	printf("Introduce un número entero:\n");                                   //Solicito al usuario un número
	scanf("%d",num1);                                                          //El programa lee el número
	scanf("%*[^\n]");                                                          //El programa lee el número
	getchar();
}
/*Nombre de función: VerOperador
 * Descripción: Con esta función se pide que operador se quiere hacer y se pide al usuario que lo introduzca
 * Argumentos de entrada: El printf solicita el signo o símbolo de la operación 
 * Retorno: los scanf permiten al usuario introducir el signo
 * */

void VerOperador(char *operador){
	printf("¿Qué operación quieres hacer? Escribe el signo:\n");               //Se pide el símbolo se la operación
	scanf("%c",operador);                                                      //El programa lee el signo
	scanf("%*[^\n]");                                                          //El programa lee el signo
	getchar();
}
/*Nombre de la función: EscribirResultado
 * Descripción: Con esta función se permite saber que procedimiento hacer dependiendo del tipo de operador que el usuario haya introducido. Dependiendo de cada uno hace una operación u otra.
 * Argumentos de entrada: con el símbolo que se ha introducido en la anterior función, lo pasa y se elige el tipo de operación.
 * Retorno: Hace la operación o si no es ningún simbolo posible dice que no es posible hacer nada.
 * */

void EscribirResultado(int num1,int num2,char operador,float *resultado){          //Prototipo de función para escribir el resultado de tipo procedimiento
	int resultad;                                                              //Se introduce la variable resultad
	switch(operador){                                                          //Con el switch case se va cambiando entre los distintos tipos de símbolos de operaciones para elegir la operación a realizar
		case'+':Sumar(num1,num2,&resultad);
			*resultado=resultad;
		break;
		case'-':Restar(num1,num2,&resultad);
			*resultado=resultad;
		break;
		case'*':Multiplicar(num1,num2,&resultad);
			*resultado=resultad;
		break;
		case'/':Dividir(num1,num2,resultado);
		break;
		default:
		printf("\nNo es posible\n");
	}
}
void Sumar(int num1,int num2,int *suma){                                         //Prototipo de función para sumar de tipo procedimiento
	*suma=num1+num2;                                                         //Defino como es la operación de la suma num1+num2
}
void Restar(int num1,int num2,int *restar){                                      //Prototipo de función para restar de tipo procedimiento
	*restar=num1-num2;                                                       //Defino como es la operación de la resta num1-num2
}
void Multiplicar(int num1,int num2,int *multiplicar){                            //Prototipo de función para restar de tipo procedimiento
	*multiplicar=num1*num2;                                                  //Defino como es la operación de multiplicar num1*num2
}
void Dividir(int num1,int num2,float *dividir){                                  //Prototipo de función para dividir de tipo procedimiento
	*dividir=(float)num1/(float)num2;                                        //Defino como es la operación de dividir dos números num1/num2
}



