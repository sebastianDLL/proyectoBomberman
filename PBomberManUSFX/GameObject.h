#pragma once
#include<iostream>;
using namespace std;
class GameObject
{
private:
	int idGameObject;
	string nombre;
	bool eliminar;

public:
	GameObject() {};
	GameObject(string _nombre);

	int getIdGameObject() { return idGameObject; }
	string getNombre() { return nombre; }
	bool getEliminar() { return eliminar; }

	int setIdGameObject(int _idGameObject) { idGameObject = _idGameObject; }
	string setNombre(string _nombre) { nombre = _nombre; }
	bool setEliminar(bool _eliminar) { eliminar = _eliminar; }

	//Metodos varios 
	// Virtuales Puros
	virtual void render() = 0;
	virtual void uptade() = 0;
	//virtual void handleEvent(SDL_Event*event) = 0;
	//Metodos Virtuales
	virtual void deletedGameObject() { eliminar = true; }
	virtual void free() {};

};

