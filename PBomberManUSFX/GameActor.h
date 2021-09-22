#pragma once
#include "GameObject.h"
#include "GameDirections.h"

class GameActor : public GameObject
{
protected:
	//Posicion x,y en la textura de ventana principal
	int posicionX;
	int posicionY;
	//Ancho y Alto de la imagen del objeto en pixeles
	int ancho;
	int alto;

	bool solido;
	bool indestructible;
	bool visible;
	bool movil;
	bool enMovimiento;
	bool aereo;
	bool terrestre;
	bool subterraneo;


	int velocidad;
	int energia;
	int vidas;

	GameDirections direccionActual;
	GameDirections direccionSiguiente;

public:
	GameActor();
	GameActor(string _nombre);

	//Metodos accesores 
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	int getSolido() { return solido; }
	int getIndestructible() { return indestructible; }
	int getVisible() { return visible; }
	int getMovil() { return movil; }
	int getEnMovimiento() { return enMovimiento; }
	int getAereo() { return aereo; }

	virtual void render() = 0;
	virtual void uptade() = 0;
	//virtual void handleEvent(SDL_Event*event) = 0;
	//virtual void deletedGameObject() { eliminar = true; }


};

