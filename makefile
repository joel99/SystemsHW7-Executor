compile: executor.c 
	gcc executor. -o exec

run: 
	./exec

clean:
	rm *~
	rm exec
