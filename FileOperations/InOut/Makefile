output: main.o
		g++ main.o -o output

main.o: main.c
		g++ -c main.c

run: output
	./output

clean:
		rm *.o output

