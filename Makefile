main: main.o imageio.o invert.o invert-half.o box.o frame.o scale.o pixel.o
	g++ -o main main.o imageio.o invert.o invert-half.o box.o frame.o scale.o pixel.o

main.o: main.cpp imageio.h invert.o invert-half.o box.o frame.o scale.o pixel.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h

invert-half.o: invert-half.cpp invert-half.o

box.o: box.cpp box.h

frame.o: frame.cpp frame.h

scale.o: scale.cpp scale.h

pixel.o: pixel.cpp pixel.h

clean:
	rm -f main sample sample.o imageio.o main.o invert.o invert-half.o box.o frame.o scale.o pixel.o
