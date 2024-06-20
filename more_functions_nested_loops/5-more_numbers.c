#include "main.h"

/**
 * more_numbers - printeando del 0 al 14 10 veces.
 */

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			/* si n es MAYOR a 9
			 * vas a poner el caracter 1 en pantalla
			 * y luego ejectuas el segundo putchar
			 */
			if (n > 9)
			{
				_putchar('1');
			}
			/*
			 * este putchar va correr indiferentemente 
			 * de si if se cumple o no ya que no es un else
			 * esto va tomar el valor de n y lo va modulos 10
			 * esta operacion SIEMPRE devuelve el ultimo digito
			 * como un un numero con un solo digito  siempre
			 * devuelve el mismo digito no importa,
			 * pero cuando es un numero con dos digitos, 
			 * vamos a devolver el ultimo digito para que 
			 * putchar lo pueda imprimir
			 * no obrante esto lo va devolver como un INT
			 * por lo cual lo tenemos que sumar con un CHAR
			 * que en este caso seria '0' y lo convierte en 
			 * su equivalente char atraves de ASCII
			 */
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}



