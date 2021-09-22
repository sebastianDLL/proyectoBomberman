#pragma once
class bombas
{
private:
	int anchoBomba;
	int altoBomba;
	int daņoBomba;
	int lugar;

public:
	int getAnchoBomba() { return anchoBomba; }
	void setAnchoBomba(int _anchoBomba) { anchoBomba = _anchoBomba; }

	int getAltoBomba() { return altoBomba; }
	void setAltoBomba(int _altoBomba) { altoBomba = _altoBomba; }

	int getDaņoBomba() { return daņoBomba; }
	void setDaņoBomba(int _daņoBomba) { daņoBomba = _daņoBomba; }

	int getLugar() { return lugar; }
	void setLugar(int _lugar) { lugar = _lugar; }

	void Parpadear();
	void RecargarBomba();
	void MejorarBomba();
	void Desaparecer();
};
