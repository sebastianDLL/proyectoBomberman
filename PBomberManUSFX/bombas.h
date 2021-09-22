#pragma once
class bombas
{
private:
	int anchoBomba;
	int altoBomba;
	int dañoBomba;
	int lugar;

public:
	int getAnchoBomba() { return anchoBomba; }
	void setAnchoBomba(int _anchoBomba) { anchoBomba = _anchoBomba; }

	int getAltoBomba() { return altoBomba; }
	void setAltoBomba(int _altoBomba) { altoBomba = _altoBomba; }

	int getDañoBomba() { return dañoBomba; }
	void setDañoBomba(int _dañoBomba) { dañoBomba = _dañoBomba; }

	int getLugar() { return lugar; }
	void setLugar(int _lugar) { lugar = _lugar; }

	void Parpadear();
	void RecargarBomba();
	void MejorarBomba();
	void Desaparecer();
};
