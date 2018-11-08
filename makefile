cuenta.pdf:tiempo.dat
	python cuenta.py 
tiempo.dat:cuenta.x
	./cuenta.x Pi_2500000.txt cuenta.txt tiempo.txt
cuenta.x:
	c++ cuenta.c -o cuenta.x
