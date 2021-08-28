compile:
	g++ -o main main.cpp 

run: 
	./main 

m: 
	make compile && make run 