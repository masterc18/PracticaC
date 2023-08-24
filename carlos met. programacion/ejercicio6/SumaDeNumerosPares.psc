Algoritmo SumaDeNumerosPares
	Definir i, suma Como Entero
	suma <- 0
	Para i <- 2 Hasta 1000 Con Paso 1 Hacer
		si i mod 2 = 0 Entonces
			suma <- suma + i
			Escribir "la suma de los numeros pares es: ", suma
			
		FinSi
		
	FinPara
FinAlgoritmo
