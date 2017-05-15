/**
  *@file Livros.h
  **@brief Header da classe Livros
  */

#ifndef __LIVROS__H__
#define __LIVROS__H__

#include <string>
#include <iostream>

using namespace std;

class Livros{
	private:
		string titulo;
		string autor;
		string editora;
		string ano;
		bool emprestado;
		Livros* next;

	public:
		Livros(string titulo, string autor, string editora, string ano);
		Livros();
		~Livros();
		string getTitulo();
		void setTitulo(string title);
		string getAutor();
		void setAutor(string autor);
		string getEditora();
		void setEditora(string editora);
		string getAno();
		void setAno(string ano);
		bool getEmprestado();
		void setEmprestado();
		Livros* getNext();
		void setNext(Livros* livro);
};

#endif //__LIVROS__H__
