/**
  *@file Emprestimos.cpp
  *@brief Funções getters e setters da classe Usuario
  */
#include "Emprestimos.h"

Emprestimos::~Emprestimos(){
}

Emprestimos::Emprestimos(Usuarios* usuario, Livros* livro){
	this->setUsuario(usuario);
	this->setLivro(livro);
	this->setNext(NULL);
}
Emprestimos::Emprestimos(){
	this->setNext(NULL);
}

string Emprestimos::getUsuario(){
	return usuario;
}
void Emprestimos::setUsuario(Usuarios* usuario){
	this->usuario = usuario;
}
string Emprestimos::getLivro(){
	return livro;
}
void Emprestimos::setLivro(Livros* livro){
	this->livro = livro;
}
string Emprestimos::getData_emp(){
	return data_emp;
}
void Emprestimos::setData_emp(string data_emp){
	this->data_emp = data_emp;
}
bool Emprestimos::getData_dev(){
	return data_dev;
}
void Emprestimos::setData_dev(string data_dev){
	this->data_dev = data_dev;
}
Emprestimos* Emprestimos::getNext(){
    return this->next;
}
void Emprestimos::setNext(Emprestimos* usuario){
    this->next = usuario;
}
