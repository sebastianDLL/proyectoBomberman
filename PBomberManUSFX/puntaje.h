#pragma once
class puntaje
{
private:
	int puntos;
	int bonus;


public:

	int getPuntos() { return puntos; }
	void setPuntos(int _puntos) { puntos = _puntos; }

	int getBonus() { return bonus; }
	void setBonus(int _bonus) { bonus = _bonus; }


	void Aumentar();
	void Multiplicarse();
	void Disminuir();
};

