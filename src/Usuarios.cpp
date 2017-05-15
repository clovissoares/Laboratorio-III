/**
  *@file Usuarios.cpp
  *@brief Funções getters e setters da classe Usuario
  */
#include "Usuarios.h"

Usuarios::~Usuarios(){
}

Usuarios::Usuarios(string nome, string endereco, string id){
	this->setNome(nome);
	this->setEndereco(endereco);
	this->setId(id);
	this->setNext(NULL);
}
Usuarios::Usuarios(){
	this->setNext(NULL);
}

string Usuarios::getNome(){
	return nome;
}
void Usuarios::setNome(string nome){
	this->nome = nome;
}
string Usuarios::getEndereco(){
	return endereco;
}
void Usuarios::setEndereco(string endereco){
	this->endereco = endereco;
}
string Usuarios::getId(){
	return id;
}
void Usuarios::setId(string id){
	this->id = id;
}
bool Usuarios::getEmprestado(){
	return emprestado;
}
void Usuarios::setEmprestado(bool emprestado){
	this->emprestado = emprestado
}
Usuarios* Usuarios::getNext(){
    return this->next;
}
void Usuarios::setNext(Usuarios* usuario){
    this->next = usuario;
}
