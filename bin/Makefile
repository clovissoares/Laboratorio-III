PROG = proj
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o Livros.o Usuario.o Emprestimos.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.cpp
	$(CC) $(CPPFLAGS) -c ../src/main.cpp

Livros.o : ../src/Livros.cpp
	$(CC) $(CPPFLAGS) -c ../src/Livros.cpp

Usuarios.o : ../src/Usuarios.cpp
	$(CC) $(CPPFLAGS) -c ../src/Usuarios.cpp

Emprestimos.o : ../src/Emprestimos.cpp
	$(CC) $(CPPFLAGS) -c ../src/Emprestimos.cpp

clean:
	rm -f core $(PROG) $(OBJS)
