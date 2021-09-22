#pragma once
class vida
{
private:
	int vidas;

public:

	int getVidas() { return vidas; }
	void setVidas(int _vidas) { vidas = _vidas; }


	void FinDelJuego();
	void Disminuir();
};

