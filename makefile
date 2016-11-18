compile: executor.c 
	gcc executor.c -o exec

run: 
	./exec

clean:
	rm *~
	rm exec
