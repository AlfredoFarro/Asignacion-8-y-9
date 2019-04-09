Algoritmo Hoja7Ejercicio2
	Escribir "Esccribe tu numero de 6 cifras"
	Leer num
	
	a<-num%1000000/100000
	b<-num%100000/10000
	c<-num%10000/1000
	d<-num%1000/100
	e<-num%100/10
	f<-num%10
	
	Escribir "El numero original es:" num
	Escribir "El numero nuevo es:" trunc(a) trunc(f) trunc(b) trunc(e) trunc(c) trunc(d)
	
FinAlgoritmo
