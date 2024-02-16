output: examp1.o
		g++ examp1.o -o output

main.o: examp1.c
		g++ -c examp1.c

run: output
	./output

clean:
		rm *.o output

