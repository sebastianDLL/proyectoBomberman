#pragma once
#include<iostream>;
using namespace std;

class GameObject
{
private:
	int idGameObject;
	string nombre;
	bool eliminar= false;

public:
	GameObject();
	GameObject(string _nombre);

	int getIdGameObject() { return idGameObject; }
	string getNombre() { return nombre; }
	bool getEliminar() { return eliminar; }

	void setIdGameObject(int _idGameObject) { idGameObject = _idGameObject; }
	void setNombre(string _nombre) { nombre = _nombre; }
	void setEliminar(bool _eliminar) { eliminar = _eliminar; }


	//Metodos varios 
	//Metodos Virtuales Puros
	virtual void render() = 0;
	virtual void uptade() = 0;
	//virtual void handleEvent(SDL_Event*event) = 0;
	//Metodos Virtuales
	virtual void deleteGameObject() { eliminar = true; }
	virtual void free() {};

};

