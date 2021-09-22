#pragma once
#include<iostream>
using namespace std;
class Bomber
{
private:
	int anchoAvatar;
	int altoAvatar;

public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar;}

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	void Morir();
	void Correr();
	void PonerBomba();
	void ActivarBomba();
	void Crear();
	void GanarPuntos();
	void MostrarInformacion();
};

