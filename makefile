tiro.png : tiro.py friccion.dat sinfriccion.dat
	python tiro.py
	
friccion.dat sinfriccion.dat : tiro.x
	./tiro.x 
	
tiro.x : tiro.cpp
	c++ tiro.cpp -o tiro.x