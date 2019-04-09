Algoritmo Hoja7Ejercicio3
	Escribir "Edad del jugador"
	Leer edad
	Escribir "Jugador nacional[N] Jugador Extranjero [E]"
	leer nacionalidad
	
	sueldo <- 2500
	
	si (nacionalidad = 'N') entonces
		sueldo <- sueldo + 0
	FinSi
	si (nacionalidad = 'E') entonces
		sueldo <- sueldo + 500
	FinSi
	
	si (15 > edad) entonces
		sueldo <- sueldo + 800
	FinSi
	si (15<=edad)y(edad<=20) entonces
		sueldo <- sueldo + 1400
	FinSi
	si (21<=edad)y(edad<=25) entonces
		sueldo <- sueldo + 1500
	FinSi
	si (25<=edad)y(edad<=30) entonces
		sueldo <- sueldo + 1200
	FinSi
	si (edad >=31) entonces
		sueldo <- sueldo + 800
	FinSi
	
	Escribir "El sueldo será de: " sueldo
FinAlgoritmo
