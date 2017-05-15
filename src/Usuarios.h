/**
  *@file Usuarios.h
  *@brief Header da classe Usuarios
  */

#ifndef __USUARIOS__H__
#define __USUARIOS__H__

#include <string>
#include <iostream>

using namespace std;

class Usuarios{
	private:
		string nome;
		string endereco;
		string id;
		Usuarios* next;

	public:
		Usuarios(string nome, string endereco, string id);
		Usuarios();
		~Usuarios();
		string getNome();
		void setNome(string nome);
		string getEndereco();
		void setEndereco(string endereco);
		string getId();
		void setId(string id);
		Usuarios* getNext();
		void setNext(Usuarios* usuario);
};

#endif //__USUARIOS__H__
