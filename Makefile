# target - what i want to  (a.out)
# dependancy
# what to do
all: maind mains

mains: main.o libmyMath.a
	gcc -Wall -L./ main.o libmyMath.a -o mains

maind: main.o libmyMath.so
	gcc -Wall -Wl,-rpath=./ main.o libmyMath.so -o maind

main.o: main.c myMath.h
	gcc -Wall -c main.c

power.o: power.c myMath.h
	gcc -Wall -c -fPIC power.c

basicMath.o: basicMath.c myMath.h
	gcc -Wall -c  -fPIC basicMath.c
	
libmyMath.a: basicMath.o power.o 
	ar rcs libmyMath.a basicMath.o power.o

mymaths: libmyMath.a 

mymathd: libmyMath.so

libmyMath.so: basicMath.o power.o 
	gcc -Wall -shared  -o libmyMath.so basicMath.o power.o 

.PHONY:clean

clean:
	rm maind mains *.o lib* 