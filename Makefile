main: main.o imageio.o funcs.o
	g++ -o main main.o imageio.o funcs.o

main.o: main.cpp imageio.h funcs.h

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f main sample sample.o imageio.o main.o funcs.o
