#pragma once

class Explosion {
private:
	int radioExplosion;
	int da�o;
	int ancho;
	int alto;
	int tiempoExplosion;


public:
	int getRadioExplosion() { return radioExplosion; }
	void setRadioExplosion(int _radioExplosion) { radioExplosion = radioExplosion; }

	int getDa�o() { return da�o; }
	void setDa�o(int _da�o) { da�o = _da�o; }

	int getAncho() { return ancho; }
	void setAncho(int _ancho) { ancho = _ancho; }

	int getAlto() { return alto; }
	void setAlto(int _alto) { alto = _alto; }

	int getTiempoExplosion() { return tiempoExplosion; }
	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = tiempoExplosion; }


	void Destruir();
	void Matar();


};
