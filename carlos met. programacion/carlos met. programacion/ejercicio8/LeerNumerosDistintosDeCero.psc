Algoritmo LeerNumerosDistintosDeCero
	Definir n, c, mayorr Como Entero
	n = 1
	c = 1
	Mientras n <> -99 Hacer
		Escribir "ingresa un numero";
		Leer n;
		si n <> 0 Entonces
			si c == 1 Entonces
				mayorr = n
				c = 2
				
				
			FinSi
			si n < 0 Entonces
				EScribir "El numero es negativo ", n
			
				
			FinSi
		FinSi
	FinMientras
	Escribir "El numero mayor es: ", mayorr
FinAlgoritmo
