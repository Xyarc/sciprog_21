CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm
#Comment line

all: MatrixMult_main



MatrixMult_main: MatrixMult_main.o MatrixMult_func.o
	$(CC) -o $@ $^ $(LDFLAGS)

##$(CC) -o MatrixMult_main MatrixMult_main.o mm.o $(LDFLAGS)

MatrixMult_func.o: MatrixMult_func.c
	$(CC) -c $(CCFLAGS) $<

##$(CC) -c $(CCFLAGS) mm.c



MatrixMult_main.o: MatrixMult_main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) MatrixMult_main.c

clean:
	rm *.o
