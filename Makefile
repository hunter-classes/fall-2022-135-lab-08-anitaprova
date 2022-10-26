main: main.o imageio.o invert.o
	g++ -o main main.o imageio.o invert.o

main.o: main.cpp imageio.h

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h

clean:
	rm -f main sample sample.o imageio.o main.o invert.o
