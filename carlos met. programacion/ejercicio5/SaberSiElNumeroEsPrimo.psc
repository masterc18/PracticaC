Algoritmo SaberSiElNumeroEsPrimo
	Definir num1, i, raiz_n Como Entero
	Definir isprime Como Logico
	Escribir "Determinar si un numero es primo o no....";
	Escribir "Escribir un numero: ";
	Leer num1;
	
	si num1 <= 1 Entonces
		Escribir "Este no es un numero primo";
	SiNo
		raiz_n <- redon(Raiz(num1));
		isprime <- Verdadero;
		Para i <- 2 hasta raiz_n Hacer
			si num1 mod 1 = 0 Entonces
				isprime <- Falso;
				
			FinSi
		FinPara
		si isprime Entonces
			Escribir "Primer numero";
		SiNo
			Escribir " es un numero primo";
		FinSi;
	FinSi;
	
FinAlgoritmo
