#pragma once
class tiempo
{
private:
	int minutos;
	int segundos;


public:

	int getMinutos() { return minutos; }
	void setMinutos(int _minutos) { minutos = _minutos; }

	int getSegundos() { return segundos; }
	void setSegundos(int _segundos) { segundos = _segundos; }


	void Aumentar();
	void Disminuir();
};

