Proceso CambiCantidad
    Definir total_compra, pago, cambio Como Entero;
    Definir b1000, b500, b200, b100, b50, b20, b10, b5, m50, m10 Como Entero;
	
    Escribir "Ingrese el total de la compra: ";
    Leer total_compra;
	
    Escribir "Ingrese el pago recibido: ";
    Leer pago;
	
    cambio <- pago - total_compra;
	
    Escribir "El cambio a devolver es de: $", cambio;
	
    b1000 <- trunc(cambio / 1000);
    cambio <- redon(cambio - b1000 * 1000);
	
    b500 <- trunc(cambio / 500);
    cambio <- redon(cambio - b500 * 500);
	
    b200 <- trunc(cambio / 200);
    cambio <- redon(cambio - b200 * 200);
	
    b100 <- trunc(cambio / 100);
    cambio <- redon(cambio - b100 * 100);
	
    b50 <- trunc(cambio / 50);
    cambio <- redon(cambio - b50 * 50);
	
    b20 <- trunc(cambio / 20);
    cambio <- redon(cambio - b20 * 20);
	
    b10 <- trunc(cambio / 10);
    cambio <- redon(cambio - b10 * 10);
	
    b5 <- trunc(cambio / 5);
    cambio <- redon(cambio - b5 * 5);
	
    m50 <- trunc(cambio / 0.5);
    cambio <- redon(cambio - m50 * 0.5);
	
    m10 <- trunc(cambio / 0.1);
    cambio <- redon(cambio - m10 * 0.1);
	
    Escribir "El cambio se compone de:";
    Escribir b1000, " billetes de 1000;";
    Escribir b500, " billetes de 500;";
    Escribir b200, " billetes de 200;";
    Escribir b100, " billetes de 100;";
    Escribir b50, " billetes de 50;";
    Escribir b20, " billetes de 20;";
    Escribir b10, " billetes de 10;";
    Escribir b5, " billetes de 5;";
    Escribir m50, " monedas de 50 centavos;";
    Escribir m10, " monedas de 10 centavos;";
FinProceso

