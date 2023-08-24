Algoritmo CalcularLaNotaPromedioDeLosEstudiantes
	definir n, c Como Real
	Definir x Como Entero
	n = 1;
	x = 0;
	suma = 0;
	c = 0;
	mientras n <> 0 Hacer
		Escribir "ingresar una estudiante : ";
		leer n;
		si n <> 0 Entonces
			suma = suma + n
			x = x + 1;
			c = suma/x
			
			
		FinSi
	FinMientras
	si x == 0 Entonces
		Escribir "El promedio de las notas es: ", 0
	SiNo
		Escribir "El promedio de las notas es: ", c
	FinSi
	
	
FinAlgoritmo
