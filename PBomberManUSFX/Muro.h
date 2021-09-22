#pragma once
class Muro
{
private:
	int ancho;
	int alto;
	int resistencia;


public:
	
	int getResistencia() { return resistencia; }
	void setResistencia(int _resistencia) { resistencia = _resistencia; }

	int getAncho() { return ancho; }
	void setAncho(int _ancho) { ancho = _ancho; }

	int getAlto() { return alto; }
	void setAlto(int _alto) { alto = _alto; }


	void Destruirse();
	void Permanecer();
	void Limitar();
};

