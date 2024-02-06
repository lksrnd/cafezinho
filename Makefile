#make para compilar

all: flex.c bison.c bison.h
	g++ bison.c flex.c -lfl -o cafezinho -g

bison.c bison.h: bison.y
	bison -d bison.y -o bison.c

flex.yy.c: flex.l bison.tab.h
	bison flex.l -o flex.c

clean: rm *.o
