#pragma once
class escenario
{
private:
	int tama�o;
	int filas;
	int columnas;


public:
	int getTama�o() { return tama�o; }
	void setTama�o(int _tama�o) { tama�o = _tama�o; }

	int getFilas() { return filas; }
	void setFilas(int _filas) { filas = _filas;}

	int getColumnas() { return columnas; }
	void setColumnas(int _columnas) { columnas = _columnas; }


	void Recorrer();
	void Aparecer();
	void Desaparecer();

};

