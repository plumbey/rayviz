CFLAGS = -Wall
LIBS = lib/libraylib.a
LIBDIR = -Ilib/

all: main.o
	clang -framework CoreVideo -framework IOKit \
		-framework Cocoa -framework GLUT -framework \
		OpenGL main.o $(LIBDIR) $(LIBS) -o rayviz
main.o:
	clang -c main.c
clean:
	rm main.o rayviz
