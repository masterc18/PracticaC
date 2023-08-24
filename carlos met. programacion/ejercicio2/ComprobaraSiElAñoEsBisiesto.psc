Algoritmo ComprobaraSiElAñoEsBisiesto
	Definir num1 Como Entero
	Escribir "dime un numero";
	Leer num1;
	si num1 mod 4 = 0 Entonces
	
	 
		
		si num1 mod 100 = 0 Entonces
			si  num1 mod 400 = 0 Entonces
				EScribir " Si es un año bisiesto";
			SiNo
				
				EScribir "no es un año bisiesto";
				
				
				
			FinSi
		SiNo
			Escribir "Es un año bisiesto";
			
		FinSi
	     
	SiNo
		Escribir " no es un año bisiesto";
	FinSi
	
	
FinAlgoritmo
