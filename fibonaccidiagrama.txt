Algoritmo Serie_fibonacci
	pre <- 0
	pos <- 0
	Escribir 'Ingresar hasta que n cantidad se reproducira'
	Leer n
	Escribir pre,'',pos
	Para x<-3 Hasta n Hacer
		val <- pre+pos
		pre <- pos
		pos <- val
		Escribir val,''
	FinPara
FinAlgoritmo

