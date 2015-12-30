
objects=main.o merger.o
a:$(objects)
		g++ -o a $(objects)
main.o:merger.c merger.h
		g++ -c main.c
merger.o:merger.h
		g++ -c merger.c
clean:
		rm a $(objects)
