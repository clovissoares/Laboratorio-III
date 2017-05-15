/**
  *@file Livros.cpp
  *@brief Funções getters e setters da classe Livros
  */
#include "Livros.h"

Livros::~Livros(){

}

Livros::Livros(string titulo, string autor, string editora, string ano){
	this->setTitulo(titulo);
	this->setAutor(autor);
	this->setEditora(editora);
	this->setAno(ano);
	this->setNext(NULL);
}
Livros::Livros(){
	this->setNext(NULL);
}

string Livros::getTitulo(){
	return titulo;
}
void Livros::setTitulo(string title){
	this->titulo = title;
}
string Livros::getAutor(){
	return autor;
}
void Livros::setAutor(string autor){
	this->autor = autor;
}
string Livros::getEditora(){
	return editora;
}
void Livros::setEditora(string editora){
	this->editora = editora;
}
string Livros::getAno(){
	return Ano;
}
void Livros::setAno(string Ano){
	this->ano = ano;
}
Livros* Livros::getNext(){
    return this->next;
}

void Livros::setNext(Livros* livro){
    this->next = livro;
}
