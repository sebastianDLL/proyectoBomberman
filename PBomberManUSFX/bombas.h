#pragma once
class bombas
{
private:
	int anchoBomba;
	int altoBomba;
	int da�oBomba;
	int lugar;

public:
	int getAnchoBomba() { return anchoBomba; }
	void setAnchoBomba(int _anchoBomba) { anchoBomba = _anchoBomba; }

	int getAltoBomba() { return altoBomba; }
	void setAltoBomba(int _altoBomba) { altoBomba = _altoBomba; }

	int getDa�oBomba() { return da�oBomba; }
	void setDa�oBomba(int _da�oBomba) { da�oBomba = _da�oBomba; }

	int getLugar() { return lugar; }
	void setLugar(int _lugar) { lugar = _lugar; }

	void Parpadear();
	void RecargarBomba();
	void MejorarBomba();
	void Desaparecer();
};
