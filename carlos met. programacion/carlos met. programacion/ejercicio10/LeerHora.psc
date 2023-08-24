Algoritmo LeerHora
	Definir hora1, hora2, horat, minutos1, minutos2, minutost, segundos1, segundos2, segundost, formato1, formato2 Como Entero;
	Escribir "Ecriba Hora Inicial";
	Escribir "Hora"; Leer hora1; Escribir "Minutos"; leer minutos1; Escribir "Segundos"; leer segundos1;
	Escribir "Escoja la opcion 1.Am , 2.Pm";
	Leer formato1;
	Escribir "Ecriba Hora Final";
	Escribir "Hora"; Leer hora2; Escribir "Minutos"; leer minutos2; Escribir "Segundos"; leer segundos2;
	Escribir "Escoja la opcion 1.Am o 2.Pm";
	Leer formato2;
	Si (formato1==1 Y formato2==1) Entonces
		horat=hora2+hora1; minutost=minutos2+minutos1; segundost=segundos2+segundos1;
	Sino
		Si (formato1==2 Y formato2==2) Entonces
			horat=hora2+hora1; minutost=minutos1-minutos2; segundost=segundos1-segundos2;
		Sino
			horat=(hora2+12)-hora1; minutost=minutos1+minutos2; segundost=segundos1+segundos2;
		FinSi
	FinSi
	si(horat<0) Entonces
		horat=horat*(-1);
	FinSi
	Si(minutost<0) Entonces
		minutost=minutost*(-1);
	FinSi
	Si(segundost<0) Entonces
		segundost=segundost*(-1);
	FinSi
	Escribir "Tiempo Transcurrido ",horat,":",minutost,":",segundost;
FinAlgoritmo
