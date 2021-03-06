/**
  *@file Emprestimos.h
  *@brief Header da classe Emprestimos
  */

#ifndef __EMPRESTIMOS_H__
#define __EMPRESTIMOS__H__

#include <string>
#include <iostream>

using namespace std;

class Emprestimos{
	private:
	Usuarios* usuario;
	Livros* livro;

	public:
		Emprestimos(Usuarios* usuario, Livros* livro);
		Emprestimos();
		~Emprestimos();
		string getUsuario();
		void setUsuario(Usuarios* usuario);
		string getLivro();
		void setLivro(Livros* livro);
		string getData_emp();
		void setData_emp(string data_emp);
		string getData_dev();
		void setData_dev(string data_dev);
		Emprestimos* getNext();
		void setNext(Emprestimos* usuario);
};

#endif //__EMPRESTIMOS__H__
