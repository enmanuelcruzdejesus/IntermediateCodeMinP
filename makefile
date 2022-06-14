j: lex.yy.o sym_table.o parser.cpp
	g++ -g lex.yy.o sym_table.o type_ch.o parser.cpp -o j

sym_table.o:
	g++ -c sym_table.cpp -o sym_table.o

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c -o lex.yy.o

y.tab.c: parser.y
	yacc -d parser.y -o parser.cpp
	mv parser.hpp parser.h

lex.yy.c: y.tab.c
	lex scanner.l

clean:
	rm lex.yy.c y.tab.c y.tab.h parser.h test
