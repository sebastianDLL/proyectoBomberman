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
	bool getSolido() { return solido; }
	bool getIndestructible() { return indestructible; }
	bool getVisible() { return visible; }
	bool getMovil() { return movil; }
	bool getEnMovimiento() { return enMovimiento; }
	bool getAereo() { return aereo; }
	bool getTerrestre() { return terrestre; }
	bool getSubterraneo() { return subterraneo; }
	int getVelocidad() { return velocidad; }
	int getEnergia() { return energia; }
	int getVidas() { return vidas; }


	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { ancho = _alto; }
	void setSolido(bool _solido) { solido = _solido; }
	void setIndestructible(bool _indestructible) { indestructible = _indestructible; }
	void setVisible(bool _visible) { visible = _visible; }
	void setMovil(bool _movil) { movil = _movil; }
	void setEnMovimiento(bool _enMovimiento) { enMovimiento = _enMovimiento; }
	void setAereo(bool _aereo) { aereo = _aereo; }
	void setTerrestre(bool _terrestre) { terrestre = _terrestre; }
	void setSubterraneo(bool _subterraneo) { subterraneo = _subterraneo; }
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	void setEnergia(int _energia) { energia = _energia; }
	void setVidas(int _vidas) { vidas = _vidas; }


	//Metodos Virtuales redefinidos
	virtual void render() {};
	virtual void uptade() {};
	//virtual void handleEvent(SDL_Event*event) = 0;
	//virtual void deletedGameObject() { eliminar = true; }


};

